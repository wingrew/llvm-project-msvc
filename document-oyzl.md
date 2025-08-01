| MSVC编译方言  | clang15.0.7通过情况（支持/部分支持/不支持） | 原因 | 依据来源 |样例|解决方案|
|--------|------|-------|-------|-------|-------|
| __noop |部分支持|__noop 的 sema 错误|https://github.com/llvm/llvm-project/issues/14453|test19.cpp|修改源码
| template |部分支持|Microsoft 模式下的模板不允许从一种类型转换为另一种类型|https://github.com/llvm/llvm-project/issues/17225|test18.cpp|修改源码
| template |部分支持|MSVC 允许不完整类型作为模板参数|https://github.com/llvm/llvm-project/issues/17598|test17.cpp|修改源码
| protected |部分支持|受保护的 typedef 无法在派生类中访问|https://github.com/llvm/llvm-project/issues/19514|test16.cpp|修改源码
| friend |部分支持|父类中受保护的友元函数将无法编译|https://github.com/llvm/llvm-project/issues/20060|test15.cpp|修改源码
| static_assert |部分支持|typdef 、模板扩展和条件编译错误|https://github.com/llvm/llvm-project/issues/26968|test14.cpp|修改源码
| 宏令牌粘贴 |部分支持|VC++ 运行时 clang-cl 预处理器错误 |https://github.com/llvm/llvm-project/issues/27754|test13.cpp|修改源码
| 宏调用与展开 |部分支持|VC++ 工作时，扩展中的 clang-cl 预处理器错误 |https://github.com/llvm/llvm-project/issues/27756|test12.cpp|修改源码
| 非类型模版参数 |部分支持|强制转换指向成员的指针模板参数 |https://github.com/llvm/llvm-project/issues/33055|test11.cpp|修改源码
| [[maybe_unused]] 属性 |部分支持|不能直接用于函数类型的参数列表中 |https://github.com/llvm/llvm-project/issues/108095|test10.cpp|修改源码
|  __declspec |部分支持|__declspec(selectany) 的使用限制 |https://github.com/llvm/llvm-project/issues/110208|test9.cpp|修改源码
|  lambda表达式 |部分支持| CLI的缘故 |https://learn.microsoft.com/zh-cn/cpp/cpp/examples-of-lambda-expressions?view=msvc-140|test8.cpp|修改源码
|  异常处理 |部分支持| 未添加/EHa编译选项 |https://learn.microsoft.com/zh-cn/cpp/cpp/exception-handling-differences?view=msvc-140|test7.cpp|增加/EHa编译选项
|  noexcept |部分支持| noexcept 中直接使用了类型特性 std::is_pod<T> |https://learn.microsoft.com/zh-cn/cpp/cpp/noexcept-cpp?view=msvc-140|test6.cpp|修改源码
|  异常处理 |部分支持| 未添加/EHsc编译选项 |https://learn.microsoft.com/zh-cn/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-140|test5.cpp|增加/EHsc编译选项
|  匿名类类型 |部分支持| 未添加-Wmicrosoft-anon-tag编译选项 |https://learn.microsoft.com/zh-cn/cpp/cpp/anonymous-class-types?view=msvc-140|test3.c|增加对应编译选项|
|  类的显示重写 |部分支持| 在类内部定义成员函数时，错误地使用了类名限定符 |https://learn.microsoft.com/zh-cn/cpp/cpp/explicit-overrides-cpp?view=msvc-140|test1.cpp|修改源码|









