// .\clang-testcase\test18.cpp(7,6): error: non-type template argument of type 'const int *' cannot be converted to a value of type 'const void *'
// foo<&x> b;
//      ^
// .\clang-testcase\test18.cpp(1,23): note: template parameter is declared here
// template <const void *>
//                       ^
// 1 error generated.
//https://github.com/llvm/llvm-project/issues/17225
//author:欧阳照林
//Microsoft 模式下的模板不允许从一种类型转换为另一种类型
template <const void *>
struct foo {
};

extern const int x;
foo<(const void *)&x> a;
foo<&x> b;
foo<((const void *)&x)> c;