/*
sizeof 后面括号问题
*/

#include <iostream>

int main() {
#if _MSC_VER == 1700
    std::cout << "Compiled with MSVC 2012 (_MSC_VER == 1700)" << std::endl;
#elif _MSC_VER == 1900
    std::cout << "Compiled with MSVC 2015 (_MSC_VER == 1900)" << std::endl;
#else
    std::cout << "Compiled with unknown MSVC version (_MSC_VER == " << _MSC_VER << ")" << std::endl;
#endif
    auto x = 10 * sizeof uint64_t;
    return 0;
}
