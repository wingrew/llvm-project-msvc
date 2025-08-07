// .\clang-testcase\test16.cpp(6,14): error: 'B' is a protected member of 'A'
// struct D: A::B, A { };
//              ^
// .\clang-testcase\test16.cpp(3,17): note: declared protected here
//          struct B { };
//                 ^
// 1 error generated.
//来源：https://github.com/llvm/llvm-project/issues/19514
//author:欧阳照林
//受保护的 typedef 无法在派生类中访问
class A {
     protected:
         struct B { };
};

struct D: A::B, A { };