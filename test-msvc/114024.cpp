/*
Clang 在 decltype 上下文中将 static_cast<Base&>(*this) 
视为试图将 Base&（非 const 左值引用）绑定到一个 Derived 对象，
而没有正确考虑继承关系。
*/
struct Base
{};

int foo(Base&);

struct Derived : Base
{
    auto f() & -> decltype(foo(static_cast<Base&>(*this)))
    {
        return foo(static_cast<Base&>(*this));
    }
};

int main() {
	return 0;
}