#!/usr/bin/env bash
set -euo pipefail

# 你可以通过环境变量覆盖：
#   CLANG   / CLANGXX
CLANG="${CLANG:-../../build/bin/clang}"
CLANGXX="${CLANGXX:-../../build/bin/clang++}"

ROOT_DIR="$(pwd)/clang_tests_oyzl"
SRC_DIR="${ROOT_DIR}/src"
BUILD_DIR="${ROOT_DIR}/build"

mkdir -p "${SRC_DIR}" "${BUILD_DIR}"

echo "使用 clang:   ${CLANG}"
echo "使用 clang++: ${CLANGXX}"
echo "测试根目录:   ${ROOT_DIR}"
echo

########################################
# 1. 生成测试源码
########################################

# 1.1 简单 C 程序
cat > "${SRC_DIR}/c_hello.c" << 'EOF'
#include <stdio.h>

int main(void) {
  printf("hello c\n");
  return 0;
}
EOF

# 1.2 C99 特性（VLA + designated initializer）
cat > "${SRC_DIR}/c_c99_features.c" << 'EOF'
#include <stdio.h>

int sum_vla(int n) {
  int a[n];
  for (int i = 0; i < n; ++i)
    a[i] = i;
  int s = 0;
  for (int i = 0; i < n; ++i)
    s += a[i];
  return s;
}

struct Point {
  int x, y;
};

int main(void) {
  struct Point p = { .x = 1, .y = 2 };
  printf("Point: %d %d, sum_vla(5) = %d\n", p.x, p.y, sum_vla(5));
  return 0;
}
EOF

# 1.3 简单 C++ 程序（iostream）
cat > "${SRC_DIR}/cpp_hello.cpp" << 'EOF'
#include <iostream>

int main() {
  std::cout << "hello cpp" << std::endl;
  return 0;
}
EOF

# 1.4 C++ 模板 / inline / namespace
cat > "${SRC_DIR}/cpp_templates.cpp" << 'EOF'
#include <iostream>
#include <vector>
#include <algorithm>

namespace math {
template <typename T>
T add(T a, T b) {
  return a + b;
}

template <typename It, typename T>
T sum(It begin, It end, T init) {
  for (; begin != end; ++begin)
    init += *begin;
  return init;
}
}

int main() {
  std::vector<int> v{1, 2, 3, 4, 5};
  int s = math::sum(v.begin(), v.end(), 0);
  std::cout << "add(2,3)=" << math::add(2, 3) << ", sum(v)=" << s << "\n";
  return 0;
}
EOF

# 1.5 C++ 异常 / 标准库
cat > "${SRC_DIR}/cpp_exceptions.cpp" << 'EOF'
#include <iostream>
#include <stdexcept>

int may_throw(int x) {
  if (x == 0)
    throw std::runtime_error("x must not be zero");
  return 42 / x;
}

int main() {
  try {
    std::cout << "may_throw(2) = " << may_throw(2) << "\n";
    std::cout << "may_throw(0) = " << may_throw(0) << "\n";
  } catch (const std::exception &e) {
    std::cout << "caught exception: " << e.what() << "\n";
  }
  return 0;
}
EOF

# 1.6 UTF-8 源码（中文注释 + UTF-8 string literal）
cat > "${SRC_DIR}/cpp_utf8.cpp" << 'EOF'
// UTF-8 测试：中文注释 & 字符串
#include <iostream>
#include <string>

int main() {
  std::string s = u8"你好，UTF-8！";
  std::cout << s << "\n";
  return 0;
}
EOF

# 1.7 预处理 & 宏 / 条件编译
cat > "${SRC_DIR}/c_preprocess.c" << 'EOF'
#include <stdio.h>

#define FOO(x) ((x) + 1)

#if defined(__clang__)
#define COMPILER "clang"
#else
#define COMPILER "other"
#endif

int main(void) {
  printf("compiler=%s, FOO(41)=%d\n", COMPILER, FOO(41));
  return 0;
}
EOF

# 1.8 多文件链接测试
cat > "${SRC_DIR}/cpp_multi_a.cpp" << 'EOF'
#include <iostream>

int add(int, int);

int main() {
  int v = add(2, 3);
  if (v != 5) {
    std::cerr << "add(2,3) != 5\n";
    return 1;
  }
  std::cout << "add(2,3) = " << v << "\n";
  return 0;
}
EOF

cat > "${SRC_DIR}/cpp_multi_b.cpp" << 'EOF'
int add(int a, int b) {
  return a + b;
}
EOF

# 1.9 负例：带语法错误的 C++，期望编译失败
cat > "${SRC_DIR}/cpp_error.cpp" << 'EOF'
int main() {
  if ( // 故意缺少条件和右括号
}
EOF

########################################
# 2. 小的测试执行框架
########################################

fail_count=0

pass() {
  echo "[PASS] $1"
}

fail() {
  echo "[FAIL] $1"
  fail_count=$((fail_count + 1))
}

run_ok() {
  local name="$1"; shift
  echo "==> 期望成功: $name"
  if "$@"; then
    pass "$name"
  else
    fail "$name (应成功但失败了)"
  fi
}

run_fail() {
  local name="$1"; shift
  echo "==> 期望失败: $name"
  if "$@"; then
    fail "$name (应失败但成功了)"
  else
    pass "$name"
  fi
}

########################################
# 3. 实际编译 / 链接测试
########################################

# 3.1 C 测试
run_ok "c_hello (C11)" \
  "${CLANG}" -std=c11 -Wall -Wextra -pedantic \
  "${SRC_DIR}/c_hello.c" -o "${BUILD_DIR}/c_hello"

run_ok "c_c99_features (C11 编译 C99 特性)" \
  "${CLANG}" -std=c11 -Wall -Wextra -pedantic \
  "${SRC_DIR}/c_c99_features.c" -o "${BUILD_DIR}/c_c99_features"

# 3.2 C++ 基础
run_ok "cpp_hello (C++17)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  "${SRC_DIR}/cpp_hello.cpp" -o "${BUILD_DIR}/cpp_hello"

# 3.3 模板 & 标准库
run_ok "cpp_templates (C++17 模板)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  "${SRC_DIR}/cpp_templates.cpp" -o "${BUILD_DIR}/cpp_templates"

# 3.4 异常
run_ok "cpp_exceptions (C++17 异常)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  "${SRC_DIR}/cpp_exceptions.cpp" -o "${BUILD_DIR}/cpp_exceptions"

# 3.5 UTF-8 源文件
run_ok "cpp_utf8 (UTF-8 源)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  "${SRC_DIR}/cpp_utf8.cpp" -o "${BUILD_DIR}/cpp_utf8"

# 3.6 预处理 & 宏
run_ok "c_preprocess (宏/条件编译)" \
  "${CLANG}" -std=c11 -Wall -Wextra -pedantic \
  "${SRC_DIR}/c_preprocess.c" -o "${BUILD_DIR}/c_preprocess"

# 3.7 多文件链接
run_ok "cpp_multi (多翻译单元链接)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  "${SRC_DIR}/cpp_multi_a.cpp" "${SRC_DIR}/cpp_multi_b.cpp" \
  -o "${BUILD_DIR}/cpp_multi"

# 3.8 负例：应当报语法错误
run_fail "cpp_error (语法错误应失败)" \
  "${CLANGXX}" -std=c++17 -Wall -Wextra -pedantic \
  -c "${SRC_DIR}/cpp_error.cpp" -o "${BUILD_DIR}/cpp_error.o"

# 3.9 如有大文件 too_large.cpp，则也测一下（只做语法前端）
if [ -f "too_large.cpp" ]; then
  run_ok "too_large.cpp (现有大文件，fsyntax-only)" \
    "${CLANGXX}" -std=c++17 -fsyntax-only "too_large.cpp"
else
  echo "提示: 当前目录没有 too_large.cpp，略过大文件回归测试。"
fi

########################################
# 4. 汇总结果
########################################

echo
if [ "${fail_count}" -ne 0 ]; then
  echo "=== 测试完成，有 ${fail_count} 项失败 ==="
  exit 1
else
  echo "=== 所有测试通过 ==="
  exit 0
fi
