// AI生成
// Clang 15.0.7 支持情况： 不支持for each 语法。
// Author：廖中煜
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Testing MSVC 'for each' extension." << std::endl;

    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::cout << "Numbers:" << std::endl;
    // MSVC-specific for each syntax. This is *not* standard C++ range-based for loop.
    // It's part of the C++/CLI extensions or older MSVC dialects.
    for each (int num in numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    std::cout << "Names:" << std::endl;
    for each (const std::string &name in names)
    {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    return 0;
}