//来源：https://github.com/llvm/llvm-project/issues/108095
//如果模板参数中函数类型的规范使用 [[maybe_unused]] 属性，则会引发错误 - 初始 [ 被解释为 lambda 捕获的开始。
#include <functional>
#include <iostream>

// 定义一个函数，用于测试
int myFunction([[maybe_unused]] int x) {
    return 42; // 简单返回一个值，忽略参数 x
}

int main() {
    // 尝试将 myFunction 赋值给 std::function，参数带有 [[maybe_unused]]
    std::function<int([[maybe_unused]] int)> f = myFunction;

    // 调用函数
    std::cout << f(10) << std::endl; // 应输出 42

    return 0;
}