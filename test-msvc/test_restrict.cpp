// 文档 /Microsoft专用的修饰符/restrict (C++ AMP)
/*
Clang 完全没有 C++ AMP 的支持。它不认识 restrict(amp) 关键字，也不支持相关的 amp.h 库。
尝试用 Clang 编译这段代码会导致大量的语法和未定义符号错误，且没有任何编译选项可以启用 C++ AMP 的支持。
*/
// Author：廖中煜
#include <iostream>
#include <amp.h> // Required for C++ AMP types and functions

using namespace Concurrency;

void functionAmp() restrict(amp)
{
    int dummy = 0;
    dummy++;
}

// 一个非 AMP-restricted 函数。这个函数在 CPU 上运行。
void functionNonAmp()
{
    std::cout << "This is a non-AMP function." << std::endl;
}

void callFunctions() restrict(amp)
{
    int x;
    x = 10;
    functionAmp();
}

int main()
{
    std::cout << "Starting C++ AMP function calling restrictions example." << std::endl;
    extent<1> ext(1);
    parallel_for_each(ext, [](index<1> idx) restrict(amp) { callFunctions(); });
    std::cout << "C++ AMP function execution completed (if successful, no direct output from 'callFunctions')." << std::endl;
    functionNonAmp();
    return 0;
}