//c++中的异常处理-noexcept
// C++ 模板元编程基础：
// std::is_pod<T> 是一个 类型（例如 std::true_type 或 std::false_type），而不是布尔值。
// std::is_pod_v<T> 是 C++17 引入的便捷变量模板，等价于 std::is_pod<T>::value，直接返回 bool。
// noexcept 的语法要求：
// noexcept 后面必须跟一个 括号内的布尔表达式（如 noexcept(true) 或 noexcept(expression)）。
// 若省略 ::value 或 _v，编译器会将 std::is_pod<T> 视为类型名，导致语法错误（“expected '(' for function-style cast”）。
//author: 欧阳照林
#include <type_traits>

template <typename T>
T copy_object(const T& obj) noexcept(std::is_pod<T>)
{
   // ...
}

int main(){}