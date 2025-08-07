// .\clang-testcase\test13.cpp(16,2): error: pasting formed 'TEST_SOMENAME(', an invalid preprocessing token [-Winvalid-token-paste]
//         TEST_MACRO(1,2)
//         ^
// .\clang-testcase\test13.cpp(1,25): note: expanded from macro 'TEST_MACRO'
// #define TEST_MACRO(x,y) TEST_EXPAND(2, 0, TEST_SOMETHING(x,y,1))
//                         ^
// .\clang-testcase\test13.cpp(4,26): note: expanded from macro 'TEST_EXPAND'
// #define TEST_EXPAND(...) TEST_EXPAND_I(TEST_OVR(TEST_NAME, __VA_ARGS__), (__VA_ARGS__))
//                          ^
// .\clang-testcase\test13.cpp(6,32): note: expanded from macro 'TEST_EXPAND_I'
// #define TEST_EXPAND_I(m, args) TEST_EXPAND_II(m, args)
//                                ^
// .\clang-testcase\test13.cpp(7,44): note: expanded from macro 'TEST_EXPAND_II'
// #define TEST_EXPAND_II(m, args) TEST_CAT(m ## args,)
//                                            ^
// 1 error generated.
//来源：https://github.com/llvm/llvm-project/issues/27754
//author:欧阳照林
//VC++ 运行时 clang-cl 预处理器错误 
#define TEST_MACRO(x,y) TEST_EXPAND(2, 0, TEST_SOMETHING(x,y,1))
#define TEST_SOMETHING(x,y,z) 2

#define TEST_EXPAND(...) TEST_EXPAND_I(TEST_OVR(TEST_NAME, __VA_ARGS__), (__VA_ARGS__))
#define TEST_OVR(name,...) TEST_SOMENAME
#define TEST_EXPAND_I(m, args) TEST_EXPAND_II(m, args)
#define TEST_EXPAND_II(m, args) TEST_CAT(m ## args,)
#define TEST_SOMENAME(x,y,z) ;

#define TEST_CAT(a, b) TEST_CAT_I(a, b)
#define TEST_CAT_I(a, b) TEST_CAT_II(~, a ## b)
#define TEST_CAT_II(p, res) res

int main()
	{
	TEST_MACRO(1,2)
    }