/*
[clang] 在重载解析期间，clang 无法识别从具有 const 限定的 prvalue 到 rvalue ref 的引用绑定，因为该引用格式不正确
由于引用不兼容MyString&&而无法绑定到结果
*/

struct Alloc {};
struct MyString
{
    MyString() {}
    MyString(MyString&&, const Alloc&) {}
    MyString(MyString&&) {}
    MyString(const MyString&, const Alloc&) {}
    MyString(const MyString&) {}
};

struct A
{
    operator const MyString() const { return MyString(); }
};

int main() {
    MyString s(A{}, Alloc{});
    return 0;
}
