// 文档 /Microsoft专用的修饰符/调用约定/参数传递和命名约定/__clrcall
// compile with: /clr
// Clang15.0.7完全不支持C++/CLI 扩展
// Author：廖中煜
using namespace System;
int __clrcall Func1()
{
    Console::WriteLine("in Func1");
    return 0;
}

// Func1 hasn't been used at this point (code has not been generated),
// so runtime returns the address of a stub to the function
int(__clrcall *pf)() = &Func1;

// code calls the function, code generated at difference address
int i = pf(); // comment this line and comparison will pass

int main()
{
    if (&Func1 == pf)
        Console::WriteLine("&Func1 == pf, comparison succeeds");
    else
        Console::WriteLine("&Func1 != pf, comparison fails");

    // even though comparison fails, stub and function call are correct
    pf();
    Func1();
}