// .\clang-testcase\test9.cpp(1,25): error: 'selectany' can only be applied to data items with external linkage
// extern const __declspec(selectany) struct { int x; } foo = { 42 };
//                         ^
// 1 error generated.
//来源：https://github.com/llvm/llvm-project/issues/110208
//author:欧阳照林
//当然，如果你给结构体自己的定义，代码就可以编译成功：
// struct bar { int x; };
// extern const __declspec(selectany) bar foo = { 42 };

extern const __declspec(selectany) struct { int x; } foo = { 42 };

int main() {
    
}