// issue https://github.com/llvm/llvm-project/issues/147778
// Error: implicit instantiation of template within its own definition
// 这种在类型自身定义内部进行实例化或自我引用的行为，在 C++ 语言中通常是不允许的，会导致不完整的类型错误
// clang-cl 在解析模板定义时，会严格地检查这种不合法的递归实例化，并立即将其标记为错误。
// MSVC 和 clang-cl 在处理未使用的 static constexpr 成员上的策略不同
// Author：廖中煜
template <int...>
struct A
{
    static constexpr auto x = []<int>
    { return A<>(); };
};

int main() {}