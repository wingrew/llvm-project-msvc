// .\clang-testcase\test15.cpp(7,24): error: friend function 'ProtectedMemberFunc' is a protected member of 'A'
//         friend void A::ProtectedMemberFunc();
//                     ~~~^
// .\clang-testcase\test15.cpp(7,24): note: must name member using the type of the current context 'B'
// 1 error generated.
//来源：https://github.com/llvm/llvm-project/issues/20060
//author:欧阳照林
//父类中受保护的友元函数将无法编译
class A {
    protected:
        void ProtectedMemberFunc() {}
    };

    class B : public A {
        friend void A::ProtectedMemberFunc();
    };