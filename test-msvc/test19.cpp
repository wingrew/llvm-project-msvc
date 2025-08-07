// .\clang-testcase\test19.cpp(2,19): note: in instantiation of function template specialization 'f<void>' requested here
// void g() { __noop(f<void>()); }
//                   ^
// 1 error generated.
//https://github.com/llvm/llvm-project/issues/14453
//author:欧阳照林
//__noop 的 sema 错误
template<typename T> static void f() { T x = 10; }
void g() { __noop(f<void>()); }
int main(){}