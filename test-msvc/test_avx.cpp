// AI生成
// error: unknown type name '__m256'
/*
__m256 是一个 SIMD (Single Instruction, Multiple Data) 向量类型，它主要用于 Intel 和 AMD 处理器上的
AVX (Advanced Vector Extensions) 指令集。这些类型和相关的内在函数（intrinsics）允许你对多个数据元素同时执行操作，从而显著提高性能。
默认情况下，编译器并不会启用所有最新的 CPU 指令集支持。你需要明确告诉编译器你的代码会使用特定的指令集。
*/
// 可通过添加编译选项[-mavx]来解决，它指示编译器启用对 AVX 指令集的支持。一旦启用，编译器就能识别 __m256 及其相关的内在函数
// Author：廖中煜
#include <immintrin.h>

struct hva4
{
    __m256 data[4];
};

hva4 __vectorcall foo(hva4 x)
{
    x.data[0] = _mm256_add_ps(x.data[0], x.data[1]);
    return x;
}

int main()
{
    hva4 x = {};
    foo(x);
    return 0;
}
