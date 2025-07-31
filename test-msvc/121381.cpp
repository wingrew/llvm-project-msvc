/*
具有默认非类型参数的模板类永远不会与具有可变模板参数的函数的返回类型匹配
C++ 的模板参数匹配规则要求模板参数的数量和类型严格匹配。tuple<Args...> 试图将参数包 Args... 直接映射到 tuple<T1, T2>，但 Args... 只提供类型参数（例如 <int>），而 T2 是一个非类型参数，编译器无法自动将 Args... 映射到 T1 和 T2 的组合。

即使 T2 有默认值 0，C++ 的模板推导不会自动将 tuple<int> 解析为 tuple<int, 0>，因为 Args... 是一个类型参数包，而 T2 是一个非类型参数，二者的性质不同，无法直接匹配。
*/

template<typename T1, int T2 = 0>
struct tuple {};

template<typename... Args>
tuple<Args...> foo() {
    return tuple<Args...>{};
}

int main()
{
    foo<int>();
}
