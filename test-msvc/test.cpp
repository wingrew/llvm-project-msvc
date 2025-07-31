#include <iostream>
#include <typeinfo>

int main()
{
    __int64 big = 9223372036854775807LL;
    __int64 small = -9223372036854775807LL - 1;
    std::cout << "sizeof(__int64) = " << sizeof(big) << std::endl;
    std::cout << "big = " << big << ", small = " << small << std::endl;
    std::cout << "typeid(__int64).name() = " << typeid(big).name() << std::endl;
    return 0;
}
