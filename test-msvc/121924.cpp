/*
模板函数template<typename MUT> void f(MUT t)是显式模板函数实例化的可行候选者，但是 clang 没有注意

*/
template <class T>
struct A
{
    void f(T) {}
    template <typename MUT> void f(MUT t) {}
};

template<>
struct A<int>
{
    void f(int) {}
    template <typename MUT> void f(MUT t) {}
};

template
void A<int>::f(int);

int main() {
    return 0;
}