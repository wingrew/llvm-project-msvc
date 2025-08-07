// AI生成
// warning: use of member 'foo' found via unqualified lookup into dependent bases of class templates is a Microsoft
// extension [-Wmicrosoft-template]
// 可通过添加编译选项-Wno-microsoft-template解决
// Author：廖中煜
template <typename T>
struct Base
{
    void foo() {}
};

template <typename T>
struct Derived : Base<T>
{
    void bar()
    {
        foo(); // 未加 this->，标准 C++ 下非法，MSVC 允许
    }
};

int main()
{
    Derived<int> d;
    d.bar();
    return 0;
}
