// .\clang-testcase\test12.cpp(17,29): error: too many arguments provided to function-like macro invocation
//     int x = TEST_MACRO(1,(1,0));
//                             ^
// .\clang-testcase\test12.cpp(2,9): note: macro 'TEST_EXPAND_I' defined here
// #define TEST_EXPAND_I(x) x
//         ^
// .\clang-testcase\test12.cpp(17,32): error: expected expression
//     int x = TEST_MACRO(1,(1,0));
//                                ^
// 2 errors generated.
//来源：https://github.com/llvm/llvm-project/issues/27756
//author:欧阳照林
//在 VC++ 工作时，扩展中的另一个 clang-cl 预处理器错误


#define TEST_EXPAND(x) TEST_EXPAND_I(x)
#define TEST_EXPAND_I(x) x
#define TEST_REM(...) __VA_ARGS__

#define TEST_CAT(a, b) TEST_CAT_I(a, b)
#define TEST_CAT_I(a, b) a ## b

#define TEST_ELEM(n, ...) TEST_ELEM_I(n,__VA_ARGS__)
#define TEST_ELEM_I(n, ...) TEST_CAT(TEST_CAT(TEST_ELEM_, n)(__VA_ARGS__,),)
#define TEST_ELEM_0(e0, ...) e0
#define TEST_ELEM_1(e0, e1, ...) e1

#define TEST_MACRO(x,y) TEST_ELEM(x, TEST_EXPAND(TEST_REM y))

int main()
    {
    int x = TEST_MACRO(1,(1,0));
    return x;
    }