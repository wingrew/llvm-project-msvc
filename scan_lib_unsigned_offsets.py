#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
scan_lib_unsigned_offsets.py  —  wide-coverage static scanner for 32-bit risks in lib/

What it finds (all in the lib/ subtree by default):
  ✓ 强制收窄为32位: static_cast/ C-style / func-style casts to 32-bit
  ✓ 指针差值落入32位: pointer differences stored in 32-bit (simple & complex/multi-line)
  ✓ 关键函数相关（需复核）: get*Offset / *Loc / getLine/ColumnNumber / isBeforeInTU...
  ✓ 仅命名可疑需复核: 32-bit with Off/Loc/Line/Column/Range in names
  ✓ 可疑别名32位 (+ Win32): typedef/using aliases for 32-bit (u32/U32/UInt32/INT32/DWORD/UINT/ULONG...)
  ✓ 无关键词的32位位置变量（需复核）: 32-bit Begin/End/Start/Ptr/Pos... (module-whitelisted)
  ✓ 序列化位宽可能不足: VBR32 / Fixed(32) and nearby *Location calls / Record.push_back
  ✓ 容器承载32位位置: SmallVector<vector/DenseMap/...<unsigned> (multi-line aware)
  ✓ 位域32位可能存位置: unsigned X:32;
  ✓ 平台I/O偏移需复核: _FILE_OFFSET_BITS/off_t/lseek/MapViewOfFile/LARGE_INTEGER/SetFilePointer(Ex)

Usage:
  python3 scan_lib_unsigned_offsets.py [--root .] [--subpath lib] [--out unsigned_hits.md] [--max 6000]
"""
import argparse
import os
import re
import sys
from typing import List, Tuple, Dict, Set

FILE_EXTS = (".c", ".cc", ".cpp", ".h", ".hh", ".hpp", ".inc")
EXCLUDE_DIR_KEYWORDS = ("test", "unittests", "inputs", "third_party", "thirdparty", "ThirdParty", "vendor", "extern", "external", "examples", "samples")

# ---------------- Comment & string stripping ----------------
def strip_comments_and_strings(text: str) -> str:
    res = []
    i, n = 0, len(text)
    in_block = False
    in_str = False
    in_char = False
    while i < n:
        if in_block:
            if i+1 < n and text[i] == '*' and text[i+1] == '/':
                in_block = False
                i += 2
            else:
                if text[i] == '\n':
                    res.append('\n')
                i += 1
        elif in_str:
            if text[i] == '\\' and i+1 < n:
                res.append('  ')
                i += 2
            elif text[i] == '"':
                in_str = False
                res.append(' ')
                i += 1
            else:
                res.append(' ')
                i += 1
        elif in_char:
            if text[i] == '\\' and i+1 < n:
                res.append('  ')
                i += 2
            elif text[i] == "'":
                in_char = False
                res.append(' ')
                i += 1
            else:
                res.append(' ')
                i += 1
        else:
            if i+1 < n and text[i] == '/' and text[i+1] == '*':
                in_block = True
                i += 2
            elif i+1 < n and text[i] == '/' and text[i+1] == '/':
                while i < n and text[i] != '\n':
                    i += 1
                res.append('\n')
                if i < n: i += 1
            elif text[i] == '"':
                in_str = True
                res.append(' ')
                i += 1
            elif text[i] == "'":
                in_char = True
                res.append(' ')
                i += 1
            else:
                res.append(text[i])
                i += 1
    return ''.join(res)

def should_skip_dir(path: str) -> bool:
    low = path.lower()
    return any(k.lower() in low for k in EXCLUDE_DIR_KEYWORDS)

def iter_files(root: str, subpath: str) -> List[str]:
    base = os.path.join(root, subpath) if subpath else root
    files = []
    for dirpath, dirnames, filenames in os.walk(base):
        dirnames[:] = [d for d in dirnames if not should_skip_dir(os.path.join(dirpath, d))]
        for fn in filenames:
            if fn.endswith(FILE_EXTS):
                files.append(os.path.join(dirpath, fn))
    return files

def extract_module(file_path: str) -> str:
    p = file_path.replace("\\", "/")
    if "/lib/" in p:
        after = p.split("/lib/", 1)[1]
        parts = after.split("/")
        if len(parts) >= 2:
            return f"{parts[0]}/{os.path.splitext(parts[1])[0]}"
        elif parts:
            return parts[0]
    return os.path.basename(file_path)

def sanitize_snippet(s: str, max_len: int = 160) -> str:
    s = s.replace("\r", "")
    s = re.sub(r"\s+", " ", s.strip())
    s = s.replace("|", r"\|").replace("`", r"\`")
    return (s[:max_len-1] + "…") if len(s) > max_len else s

# ---------------- Alias discovery ----------------
BASE32_TYPES = r"(?:unsigned(?:\s+int)?|uint32_t|int32_t|INT32|DWORD|UINT|ULONG|ULONG32|DWORD32)"
ALIAS_NAME_RX = r"([A-Za-z_]\w*)"

def strip_comments_for_aliases(path: str) -> str:
    try:
        text = open(path, "r", encoding="utf-8", errors="ignore").read()
        return strip_comments_and_strings(text)
    except Exception:
        return ""

def discover_aliases(files: List[str]) -> Set[str]:
    aliases: Set[str] = set()
    typedef_rx = re.compile(rf"\btypedef\b\s+(?P<base>[^;]*\b{BASE32_TYPES}\b[^;]*?)\s+(?P<name>{ALIAS_NAME_RX})\s*;")
    using_rx   = re.compile(rf"\busing\b\s+(?P<name>{ALIAS_NAME_RX})\s*=\s*(?P<base>[^;]*\b{BASE32_TYPES}\b[^;]*?)\s*;")
    using_chain_rx = re.compile(rf"\busing\b\s+(?P<name>{ALIAS_NAME_RX})\s*=\s*(?P<base>{ALIAS_NAME_RX})\s*;")

    for fp in files:
        text = strip_comments_for_aliases(fp)
        for m in typedef_rx.finditer(text):
            aliases.add(m.group("name"))
        for m in using_rx.finditer(text):
            aliases.add(m.group("name"))

    changed = True
    while changed:
        changed = False
        for fp in files:
            text = strip_comments_for_aliases(fp)
            for m in using_chain_rx.finditer(text):
                name, base = m.group("name"), m.group("base")
                if base in aliases and name not in aliases:
                    aliases.add(name); changed = True
    return aliases

def build_patterns(alias_set: Set[str]) -> Dict[str, re.Pattern]:
    alias_alt = "|".join(sorted(alias_set)) if alias_set else ""
    ALIAS_GROUP = f"(?:{alias_alt})" if alias_alt else "(?!)"
    U32 = r"(?:unsigned(?:\s+int)?|uint32_t)"
    U32_OR_ALIAS = rf"(?:unsigned(?:\s+int)?|uint32_t|u32|U32|UInt32|INT32|int32_t|DWORD|UINT|ULONG|ULONG32|DWORD32|{ALIAS_GROUP})"
    POS_WORDS = r"(?:Off|Offset|FileOff|SLoc|Loc|Location|DecomposedLoc|Line|Column|Range)"
    BEGIN_END_WORDS = r"(?:Begin|End|Start|Stop|Ptr|Pos|Position|Cur|Current)"
    KEY_FUNCS = r"(?:get.*Offset|get(?:Spelling|Expansion|Presumed)Loc|isBeforeIn(?:TU|TranslationUnit)|get(?:Line|Column)Number)"

    patterns = {
        "A_static_cast": re.compile(rf"static_cast\s*<\s*{U32}\s*>\s*\("),
        "B_c_style_cast": re.compile(rf"\(\s*{U32}\s*\)\s*\("),
        "C_func_style":   re.compile(rf"\b{U32}\s*\("),
        "D_ptrdiff_simple": re.compile(rf"\b(?:unsigned|uint32_t)\b\s+\w+\s*=\s*\w+\s*-\s*\w+"),
        "E_key_funcs": re.compile(rf"\b{KEY_FUNCS}\b"),
        "F_named_32": re.compile(rf"\b(?:unsigned|uint32_t)\b.*\b{POS_WORDS}\b"),
        "K_typedef_using_alias": re.compile(rf"\b(?:typedef|using)\b[^;]*\b(?:{U32_OR_ALIAS})\b[^;]*;"),
        "I_win32_alias": re.compile(rf"\b(?:DWORD|UINT|ULONG)\b.*\b{POS_WORDS}\b"),
        "L_begin_end_vars": re.compile(rf"\b(?:{U32_OR_ALIAS})\b[^;]*\b{BEGIN_END_WORDS}\b"),
        "H_serialization_32": re.compile(r"\b(?:VBR32|Fixed\s*\(\s*32\s*\))\b"),
        "H_serialization_calls": re.compile(r"\b(?:Write.*Location|Read.*Location|Add.*Location|Record\.push_back)\b"),
        "G_unsigned_in_templates": re.compile(r"\b(?:SmallVector|vector|DenseMap|DenseSet|ArrayRef|SmallPtrSet|Optional)\s*<[^>]*\b(?:unsigned|uint32_t)\b[^>]*>"),
        "O_bitfield_32": re.compile(rf"\bunsigned\b\s+\w+\s*:\s*32\b"),
        "N_platform_io_offset": re.compile(r"\b(?:_FILE_OFFSET_BITS|off_t|fseeko|ftello|lseek|pread|pwrite|CreateFileMapping|MapViewOfFile|LARGE_INTEGER|SetFilePointer(?:Ex)?)\b"),
        "M_complex_ptrdiff": re.compile(rf"\b(?:unsigned|uint32_t)\b\s+\w+\s*=\s*[^;]*\w+\s*-\s*\w+[^;]*;"),
    }
    return patterns

RISK_ROLE_MAP = {
    "A_static_cast": ("强制收窄为32位", "计算"),
    "B_c_style_cast": ("强制收窄为32位", "计算"),
    "C_func_style":   ("强制收窄为32位", "计算"),
    "D_ptrdiff_simple": ("指针差值落入32位", "计算"),
    "M_complex_ptrdiff": ("复杂指针差值收窄", "计算"),
    "E_key_funcs": ("关键函数相关（需复核）", "比较/实现"),
    "F_named_32": ("仅命名可疑需复核", "声明/局部"),
    "K_typedef_using_alias": ("可疑别名32位", "声明/类型别名"),
    "I_win32_alias": ("可疑别名32位（Win类型）", "声明/局部"),
    "L_begin_end_vars": ("无关键词的32位位置变量（需复核）", "声明/局部"),
    "H_serialization_32": ("序列化位宽可能不足", "序列化"),
    "H_serialization_calls": ("序列化位置读写（需复核）", "序列化"),
    "G_unsigned_in_templates": ("容器承载32位位置", "声明/容器"),
    "O_bitfield_32": ("位域32位可能存位置", "声明/布局"),
    "N_platform_io_offset": ("平台I/O偏移需复核", "I/O"),
}

SUGGESTION_MAP = {
    "强制收窄为32位": "改为 uint64_t / 移除收窄",
    "指针差值落入32位": "用 uint64_t 接收指针差值",
    "复杂指针差值收窄": "把 (ptr-start) 等差值用 uint64_t 承载",
    "关键函数相关（需复核）": "检查实现是否用 64 位位置/偏移",
    "仅命名可疑需复核": "确认是否参与源位置运算；非则忽略",
    "无关键词的32位位置变量（需复核）": "在 Basic/Lex/Serialization/Frontend 等模块重点复核",
    "可疑别名32位": "追溯别名链条，统一提升为 64 位或限定仅用于非位置语义",
    "可疑别名32位（Win类型）": "核对是否用于位置/偏移；用于 I/O 偏移则需 64 位接口",
    "序列化位宽可能不足": "扩展为 64 位字段/编码（并维护版本）",
    "序列化位置读写（需复核）": "核对读写位置字段的位宽；必要时扩位",
    "容器承载32位位置": "将模板参数改为 64 位或专用偏移类型",
    "位域32位可能存位置": "避免用位域承载位置；必要时重构布局",
    "平台I/O偏移需复核": "启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset",
}

RISK_PRIORITY = {
    "强制收窄为32位": 1,
    "指针差值落入32位": 1,
    "复杂指针差值收窄": 2,
    "序列化位宽可能不足": 2,
    "容器承载32位位置": 3,
    "位域32位可能存位置": 3,
    "可疑别名32位": 3,
    "可疑别名32位（Win类型）": 3,
    "平台I/O偏移需复核": 4,
    "关键函数相关（需复核）": 5,
    "仅命名可疑需复核": 6,
    "无关键词的32位位置变量（需复核）": 6,
    "序列化位置读写（需复核）": 6,
}

MODULE_WHITELIST_FOR_BEGIN_END = ("Basic/", "Lex/", "Serialization/", "Frontend/")

def scan_file(fp: str, patterns: Dict[str, re.Pattern], begin_end_limit: bool=True) -> List[Tuple]:
    try:
        raw = open(fp, "r", encoding="utf-8", errors="ignore").read()
    except Exception:
        return []
    cleaned = strip_comments_and_strings(raw)
    lines = cleaned.replace("\r", "").split("\n")
    hits: Dict[Tuple[int, str], Dict] = {}

    func_rx = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
    current_func = ""

    n = len(lines)
    for i, line in enumerate(lines):
        module = extract_module(fp)
        if "{" in line or ")" in line:
            m = func_rx.search(line)
            if m:
                current_func = m.group(1)

        prev3 = " ".join(lines[max(0, i-3):i])
        next3 = " ".join(lines[i+1:min(n, i+4)])
        window = " ".join([prev3, line, next3])

        # build statement window until semicolon for complex patterns
        stmt = line
        j = i
        while (";" not in stmt) and j+1 < n and len(stmt) < 1000:
            j += 1
            stmt = stmt + " " + lines[j]

        matched_keys = set()
        for key, rx in patterns.items():
            target = stmt if key in ("M_complex_ptrdiff", "G_unsigned_in_templates") else (window if key in ("H_serialization_calls",) else line)
            if rx.search(target):
                if key == "L_begin_end_vars" and begin_end_limit:
                    if not any(module.startswith(w) for w in MODULE_WHITELIST_FOR_BEGIN_END):
                        continue
                matched_keys.add(key)

        if not matched_keys:
            continue

        k = (i+1, sanitize_snippet(line, 160))
        if k not in hits:
            hits[k] = {"lineno": i+1, "snippet": sanitize_snippet(line, 160), "risks": set(), "roles": set(), "symbol": current_func, "module": module}
        for mk in matched_keys:
            risk, role = RISK_ROLE_MAP[mk]
            hits[k]["risks"].add(risk)
            hits[k]["roles"].add(role)

    rows = []
    for (lineno, _), data in hits.items():
        risks_sorted = sorted(list(data["risks"]), key=lambda r: RISK_PRIORITY.get(r, 99))
        primary = risks_sorted[0] if risks_sorted else ""
        all_risks = "；".join(risks_sorted)
        roles = "；".join(sorted(list(data["roles"])))
        suggestion = "；".join(sorted({SUGGESTION_MAP.get(r, "") for r in data["risks"] if SUGGESTION_MAP.get(r, "")}))
        rows.append((data["module"], fp, lineno, data["symbol"], roles, primary, all_risks, data["snippet"], suggestion))
    return rows

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", default=".", help="Repo root (default: .)")
    ap.add_argument("--subpath", default="lib", help="Subpath to scan (default: lib)")
    ap.add_argument("--out", default="unsigned_hits.md", help="Output Markdown file")
    ap.add_argument("--max", type=int, default=6000, help="Max rows to write")
    ap.add_argument("--no-begin-end-whitelist", action="store_true", help="Do not restrict Begin/End heuristic to core modules")
    args = ap.parse_args()

    files = iter_files(args.root, args.subpath)

    alias_set = discover_aliases(files)
    patterns = build_patterns(alias_set)

    all_rows: List[Tuple] = []
    for fp in files:
        rows = scan_file(fp, patterns, begin_end_limit=not args.no_begin_end_whitelist)
        all_rows.extend(rows)

    def row_key(r):
        module, fp, lineno, sym, roles, primary, all_risks, snippet, sug = r
        return (RISK_PRIORITY.get(primary, 99), module, fp, lineno)

    all_rows.sort(key=row_key)

    if len(all_rows) > args.max:
        all_rows = all_rows[:args.max]

    header = (
        "### 命中详单（自动生成｜仅 lib 目录｜广覆盖+降噪版）\n\n"
        "| ID | 模块 | 文件 | 行 | 符号/函数 | 角色 | 主风险 | 全部风险 | 片段 | 建议动作 |\n"
        "|---:|---|---|---:|---|---|---|---|---|---|\n"
    )
    with open(args.out, "w", encoding="utf-8") as out:
        out.write(header)
        for i, r in enumerate(all_rows, 1):
            module, fp, lineno, sym, roles, primary, all_risks, snippet, sug = r
            out.write(f"| {i} | {module} | {fp} | {lineno} | {sym} | {roles} | {primary} | {all_risks} | `{sanitize_snippet(snippet)}` | {sug} |\n")

    print(f"Wrote {len(all_rows)} rows to {args.out}")
    if len(all_rows) == 0:
        print("No matches found. Consider relaxing patterns or checking your --root/--subpath.")
    elif len(all_rows) >= args.max:
        print(f"(Reached --max={args.max}; raise it if you want more rows.)")

if __name__ == "__main__":
    main()
