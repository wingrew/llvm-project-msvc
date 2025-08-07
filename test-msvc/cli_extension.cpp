// AI生成
// Clang15.0.7完全不支持C++/CLI 扩展
// Author：廖中煜
#include <iostream>

// This file must be compiled as C++/CLI in MSVC to succeed.
// In MSVC, you'd set Project Properties -> Configuration Properties -> General -> Common Language Runtime Support to "Common Language Runtime Support (/clr)".

// A managed class
ref class MyManagedClass
{
public:
    int managedValue;

    MyManagedClass(int val) : managedValue(val) {}

    void PrintValue()
    {
        System::Console::WriteLine("Managed Value: {0}", managedValue);
    }
};

int main()
{
    std::cout << "Testing MSVC C++/CLI extension." << std::endl;

    // Create an instance of the managed class using gcnew
    MyManagedClass ^ myObj = gcnew MyManagedClass(123); // Managed handle
    myObj->PrintValue();

    // Use managed array (another CLI feature)
    array<int> ^ managedArray = gcnew array<int>{1, 2, 3, 4, 5};
    System::Console::Write("Managed Array: ");
    for each (int i in managedArray) // 'for each' is also used heavily in CLI context
    {
        System::Console::Write("{0} ", i);
    }
    System::Console::WriteLine();

    // Value type (struct in C# parlance)
    // value struct MyValueStruct { int x; }; // This might also work

    return 0;
}