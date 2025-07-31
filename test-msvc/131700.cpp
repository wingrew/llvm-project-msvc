/*
gcc、clang 和 MSVC 都提供了编译器特定的机制来指示函数是否“无返回值”。gcc 和 clang 有attribute((noreturn))，而 MSVC 有__declspec(noreturn)。
gcc 和 MSVC 将其编译器特定的属性视为满足第一个声明属性的要求，但 clang 却不这样做。
也就是说，这段代码在 gcc 中编译顺利，但 clang 会发出警告

GCC 和 Clang 认为这__attribute__((noreturn))会影响函数类型，而这[[noreturn]]并不会影响函数类型
*/
__declspec(noreturn) void testfn(int);
[[noreturn]] void testfn(int);

int main() {
    return 0;
}
