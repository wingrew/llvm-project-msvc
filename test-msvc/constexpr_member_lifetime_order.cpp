// issue https://github.com/llvm/llvm-project/issues/116969
// error: constexpr variable 'my_dinner' must be initialized by a constant expression
// 在 constexpr 上下文中，在对象生命周期之外使用它是一个硬性错误。因此，Dinner 的构造函数无法成为一个有效的常量表达式，导致编译失败。
// Author：廖中煜
class Apple
{
public:
    constexpr Apple() {}
    constexpr operator int() { return 555; }
};

class Meal
{
public:
    // constexpr Meal(Apple apple) {} // OK
    constexpr Meal(int apple) {} // NG
};

class Dinner : Meal
{
public:
    Apple apple_;
    constexpr Dinner() : apple_(), Meal(apple_) {}
};

int main()
{
    constexpr Dinner my_dinner;
    return 0;
}