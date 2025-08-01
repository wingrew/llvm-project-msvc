//c++中的异常处理-新式c++的最佳做法
//clang-cl -fsyntax-only -Wno-c++11-narrowing /EHsc .\clang-testcase\test5.cpp可引入异常处理
//author: 欧阳照林

#include <stdexcept>
#include <limits>
#include <iostream>

using namespace std;

void MyFunc(int c)
{
    if (c > numeric_limits< char> ::max())
    {
        throw invalid_argument("MyFunc argument too large.");
    }
    //...
}

int main()
{
    try
    {
        MyFunc(256); //cause an exception to throw
    }

    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    //...
    return 0;
}