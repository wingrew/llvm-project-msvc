### 命中详单（lib 实现面逐条记录｜风险用名称表示）

| ID | 模块 | 文件 | 行 | 符号/函数 | 角色 | 风险名称 | 片段 | 建议动作 | 状态 |
|---|---|---|---:|---|---|---|---|---|---|
|   | Basic/SourceManager | lib/Basic/SourceManager.cpp |    | getFileOffset | 声明/计算/比较/序列化 | 强制收窄为32位 / 指针差值落入32位 / 关键函数32位实现 / 行表32位比较 / 序列化位宽不足 / 仅命名可疑需复核 | 粘贴一行关键片段 | 例：改为 uint64_t / 调整为 64 位比较 / 扩展序列化位宽 | TODO |

#### 建议使用的“风险名称”词汇表

- **强制收窄为32位**：存在 `static_cast<unsigned>`、`(uint32_t)`、`uint32_t(...)` 等把更宽类型压成 32 位的强转  
- **指针差值落入32位**：`unsigned x = Ptr - Start;` 这类把指针差值（潜在 64 位）存进 32 位变量  
- **关键函数32位实现**：`getFileOffset` / `isBeforeInTranslationUnit` / `get(Line|Column)Number` / `get(Spelling|Expansion|Presumed)Loc` 等实现中用 32 位偏移或比较  
- **行列表/二分32位比较**：行表（`LineTableInfo`）或定位二分查找里使用 32 位比较/索引  
- **序列化位宽不足**：`ASTWriter/ASTReader` 写读位置/偏移字段以 32 位存储，位宽不够  
- **仅命名可疑需复核**：命名含 `Off/Offset/Loc/Line/Column/Range/SLoc/FileOff`，但是否参与源位置运算或比较尚需确认  
- **非问题（排除）**：与源位置无关的计数/标志/哈希/`unsigned char/short`/位域等（可直接标 N/A 或不入表）

> 角色(Role) 建议取值：**声明 / 计算 / 比较 / 序列化 / 打印**  
> 关联路径(Path) 建议取值：**SourceManager / LineTable / Lexer / PP / Diagnostics / Serialization**
