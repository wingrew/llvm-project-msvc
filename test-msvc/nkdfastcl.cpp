// 文档 /Microsoft专用的修饰符/调用约定/Naked函数调用/裸函数的规则和限制
// __declspec(naked)： Clang 没有直接等效的 naked 属性。它可能会忽略它或报错。
// 目标平台需设置为 x86
// Author：廖中煜
#include <iostream>

// 使用 __declspec(naked) 和 __fastcall 定义函数。
// __declspec(naked) 告诉编译器不要生成函数的序言和尾声。
// __fastcall (在 x86 上) 意味着参数 i 在 ECX 中，j 在 EDX 中。
__declspec(naked) int __fastcall power(int i, int j)
{
    __asm {

        test edx, edx
        jnz  _loop_start
        mov eax, 1
        jmp _end_function
        _loop_start :
        mov eax, 1
            _loop :
            imul eax, ecx
            dec edx
            jnz _loop
            _end_function :
        ret
    }
}
