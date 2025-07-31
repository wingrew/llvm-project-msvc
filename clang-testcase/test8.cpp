// managed_lambda_expression.cpp
// compile with: /clr
//c++中的lambda表达式-lambda表达式的示例
//注：C++ 中的 constexpr lambda 表达式msvc2015不支持,Visual Studio 2017 版本 15.3 及更高版本 （在 /std:c++17 模式和更高版本中可用）
//author: 欧阳照林
using namespace System;

int main()
{
    char ch = '!'; // a local unmanaged variable

    // The following lambda expression captures local variables
    // by value and takes a managed String object as its parameter.
    [=](String ^s) {
        Console::WriteLine(s + Convert::ToChar(ch));
    }("Hello");
}