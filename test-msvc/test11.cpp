// .\clang-testcase\test11.cpp(7,19): error: non-type template argument of type 'int Bar::*' is not a constant expression
//   return Foo<Bar, reinterpret_cast<int Bar::*>(&Bar::c)>::getint(b);
//                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// .\clang-testcase\test11.cpp(1,31): note: template parameter is declared here
// template <typename T, int T::*MP>
//                               ^
// 1 error generated.
//来源:https://github.com/llvm/llvm-project/issues/33055
//author:欧阳照林
//强制转换指向成员的指针模板参数

template <typename T, int T::*MP>
struct Foo {
  static int getint(T *p) { return p->*MP; }
};
struct Bar { int c; };
int f(Bar *b) {
  return Foo<Bar, reinterpret_cast<int Bar::*>(&Bar::c)>::getint(b);
}

int main()
{

}