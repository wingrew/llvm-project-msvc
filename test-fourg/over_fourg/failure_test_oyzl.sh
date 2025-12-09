#!/usr/bin/env bash
# 不用 -e，失败也继续往下跑
set -uo pipefail

# 默认假设：
#   1) 你在 LLVM 的 build 目录下执行这个脚本
#   2) llvm-lit 在 ./bin/llvm-lit
#   3) clang 的测试目录在 ./tools/clang/test
#
# 如需修改，可以在运行前设置环境变量：
#   LLVM_LIT=/path/to/llvm-lit
#   CLANG_TEST_DIR=/path/to/clang/test
#
# 用法示例：
#   ./run_failed_clang_tests.sh
#   ./run_failed_clang_tests.sh --time-tests
#   LLVM_LIT=../install/bin/llvm-lit \
#   CLANG_TEST_DIR=../llvm-project/clang/test \
#     ./run_failed_clang_tests.sh --time-tests

LLVM_LIT="${LLVM_LIT:-./bin/llvm-lit}"
CLANG_TEST_DIR="${CLANG_TEST_DIR:-./tools/clang/test}"

failed_tests=(
  "ASTMerge/class-template-partial-spec/test.cpp"
  "ASTMerge/macro/test.m"
  "Analysis/ctu-main.cpp"
  "CodeGen/attr-error.c"
  "CodeGen/attr-warning.c"
  "Frontend/amdgcn-machine-analysis-remarks.cl"
  "Frontend/optimization-remark-analysis.c"
  "Frontend/optimization-remark-extra-analysis.c"
  "Frontend/optimization-remark-line-directive.c"
  "Frontend/optimization-remark-new-pm.c"
  "Frontend/optimization-remark-options.c"
  "Frontend/optimization-remark-with-hotness-new-pm.c"
  "Index/IBOutletCollection.m"
  "Index/TestClassDecl.m"
  "Index/TestClassForwardDecl.m"
  "Index/annotate-comments-objc.m"
  "Index/annotate-comments.cpp"
  "Index/annotate-macro-args.m"
  "Index/annotate-module.m"
  "Index/annotate-tokens-pp.c"
  "Index/annotate-tokens.c"
  "Index/annotate-toplevel-in-objccontainer.m"
  "Index/blocks.c"
  "Index/boxed-exprs.m"
  "Index/c-index-api-loadTU-test.m"
  "Index/c-index-getCursor-pp.c"
  "Index/c-index-getCursor-test.m"
  "Index/cindex-from-source.m"
  "Index/cindex-test-inclusions.c"
  "Index/comment-custom-block-command.cpp"
  "Index/comment-to-html-xml-conversion.cpp"
  "Index/error-on-deserialized.c"
  "Index/file-includes.c"
  "Index/file-macro-refs.c"
  "Index/fix-its.c"
  "Index/fix-its.m"
  "Index/get-cursor-macro-args.m"
  "Index/get-cursor.cpp"
  "Index/get-cursor.m"
  "Index/getcursor-pp-pch.c"
  "Index/getcursor-preamble.m"
  "Index/hidden-redecls.m"
  "Index/index-module.m"
  "Index/index-pch-with-module.m"
  "Index/load-exprs.c"
  "Index/modules-objc-categories.m"
  "Index/parse-all-comments.c"
  "Index/pch-opaque-value.cpp"
  "Index/preamble-conditionals-crash.cpp"
  "Index/preamble-reparse-chained.c"
  "Index/preamble-reparse-warn-macro.c"
  "Index/preamble.c"
  "Index/preamble_macro_template.cpp"
  "Index/redeclarations.cpp"
  "Index/reparsed-live-issue.cpp"
  "Index/retain-comments-from-system-headers.c"
  "Index/targeted-annotation.c"
  "Index/targeted-cursor.c"
  "Index/targeted-cursor.m"
  "Index/targeted-file-refs.c"
  "Lexer/SourceLocationsOverflow.c"
  "Misc/backend-optimization-failure.cpp"
  "Modules/cxx-irgen.cpp"
  "Modules/cxx-templates.cpp"
  "Modules/load-module-with-errors.m"
  "Modules/odr_hash.cpp"
  "Modules/suggest-include.cpp"
  "OpenMP/remarks_parallel_in_multiple_target_state_machines.c"
  "OpenMP/remarks_parallel_in_target_state_machine.c"
  "PCH/pch-instantiate-templates.cpp"
  "PCH/undefined-internal.c"
  "PCH/variables.c"
  "Parser/skip-function-bodies.mm"
  "Preprocessor/line-directive.c"
  "Profile/misexpect-branch.c"
  "Sema/ms-inline-asm.c"
  "SemaCXX/cxx98-compat-pedantic.cpp"
)

echo "Will run ${#failed_tests[@]} tests (from previous failed set)."
echo "Using llvm-lit: ${LLVM_LIT}"
echo "Clang test dir: ${CLANG_TEST_DIR}"
echo

declare -a passed_list=()
declare -a failed_list=()

for t in "${failed_tests[@]}"; do
  test_path="${CLANG_TEST_DIR}/$t"
  echo "===== Running $t ====="
  echo "  -> ${LLVM_LIT} -v \"${test_path}\" $*"
  "${LLVM_LIT}" -v "${test_path}" "$@"
  status=$?
  if [ $status -eq 0 ]; then
    echo "[PASS] $t"
    passed_list+=("$t")
  else
    echo "[FAIL] $t (exit code ${status})"
    failed_list+=("$t")
  fi
  echo
done

total=${#failed_tests[@]}
passed=${#passed_list[@]}
failed=${#failed_list[@]}

echo "================ SUMMARY ================"
echo "Total tests run : ${total}"
echo "Passed          : ${passed}"
echo "Failed          : ${failed}"
echo

if [ "${failed}" -ne 0 ]; then
  echo "Failed tests:"
  for t in "${failed_list[@]}"; do
    echo "  $t"
  done
  exit 1
else
  echo "All tests in this set passed."
  exit 0
fi
