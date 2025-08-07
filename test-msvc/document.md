# Clang15.0.7适配旧版本MSVC文档

+ by黄熙涵、欧阳照林、廖中煜
+ 仓库：https://github.com/wingrew/llvm-project-msvc
+ 时间：2025/7/6起

## 一、分工

- 黄熙涵：负责统筹，收集资料，环境搭建指导，部分文档梳理，测试集编写
- 欧阳照林：收集资料，部分文档梳理，测试集编写
- 廖中煜：收集资料，部分文档梳理，测试集编写

## 二、环境搭建

基础平台为：windows
ide:vscode(clang)vs(msvc)

+ clang15.0.7安装
+ msvc2015安装
+ msvc2012安装(由于微软已经将旧版本归档，应用及文档需要从镜像网站获取)

基础编译测试指令：`clang-cl -fsyntax-only file.cpp`

## 三、方言梳理
|序号| MSVC编译方言\特定情况\宏| clang15.0.7通过情况（支持/部分支持/不支持） | 原因 | 依据来源 |样例|解决方案|
|--------|--------|------|-------|-------|-------|-------|
|1| Microsoft 专用 C++ 关键字（__wchar_t） |部分支持|如果以 L 为前缀的宽字符文本包含多字符序列，则值取自第一个字符|https://learn.microsoft.com/zh-cn/cpp/cpp/string-and-character-literals-cpp?view=msvc-140|wchar_t.cpp|修改源码|
|2| Microsoft 专用 C++ 关键字（__event） |不支持|不含此关键字|https://learn.microsoft.com/zh-cn/cpp/cpp/event?view=msvc-140|event.cpp|修改源码|
|3| Microsoft 专用 C++ 关键字（__raise） |不支持|不含此关键字|https://learn.microsoft.com/zh-cn/cpp/cpp/raise?view=msvc-140|raise.cpp|修改源码|
|4| Microsoft 专用 C++ 关键字（__hook） |不支持|不含此关键字|https://learn.microsoft.com/zh-cn/cpp/cpp/hook?view=msvc-140|hook.cpp|修改源码|
|5| Microsoft 专用 C++ 关键字（__based） |不支持|支持异常，指针识别不到|https://learn.microsoft.com/zh-cn/cpp/cpp/based-pointers-cpp?view=msvc-140|based.cpp|修改源码|
|6| Microsoft 特定的属性(all) |不支持|以Microsoft 特定的属性[[gsl::suppress(<tag> [, justification: <narrow-string-literal>])]]<tag>为例，其是一个字符串，用于指定要隐藏的规则的名称。 该 optional justification 字段允许您解释禁用或禁止显示警告的原因。 指定选项 /analyze:log:includesuppressed 后，此值将显示在 SARIF 输出中。 它的值是 UTF-8 编码的窄字符串文字。|https://learn.microsoft.com/zh-cn/cpp/cpp/attributes?view=msvc-140|tag.cpp|修改源码| 
|7| 内置运算符（sizeof） |部分支持|使用sizeof时clang紧随类型时必须使用括号，但是msvc不必|https://learn.microsoft.com/zh-cn/cpp/cpp/sizeof-operator?view=msvc-140|sizeof.cpp|修改源码|
|8| 头文件（include） |部分支持|不允许"\"开头|https://learn.microsoft.com/zh-cn/cpp/cpp/header-files-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/132643|132643.cpp|修改源码|
|9| 预处理指令（import） |不支持|特性不支持|https://learn.microsoft.com/zh-cn/cpp/preprocessor/hash-import-directive-cpp?view=msvc-140|import.cpp|修改源码|
|10| 选择语句（switch） |部分支持|在 MS 模式下，我们假设所有枚举都具有明确的底层类型int。这几乎是我们应该做的，但并非完全是。MS 枚举始终为 4 个字节且默认带符号，但它们没有明确的底层类型，因此这种缩小范围的检查误导|https://learn.microsoft.com/zh-cn/cpp/cpp/switch-statement-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/30124|30124.cpp|增加编译选项|
|11| 枚举 |部分支持|clang 拒绝此代码，因为定义没有提供固定的底层类型，但 MSVC 和 edg w/--microsoft接受它作为扩展错误的核心问题：在 C++ 中，枚举可以分为两种：非作用域枚举（enum）和作用域枚举（enum class 或 enum struct）。C++11 引入了固定底层类型的枚举（通过 : 类型 指定，例如 : int）。如果一个枚举被前向声明为具有固定底层类型（如 enum E : int;），那么后续的定义（enum E {}）必须：使用相同的底层类型（这里是 int）。保持相同的枚举种类（作用域或非作用域）。不能省略底层类型（即不能在定义时不指定底层类型）。在代码中，enum E {}; 没有指定底层类型，而之前的声明 enum E : int; 指定了底层类型为 int，这导致了冲突。|https://learn.microsoft.com/zh-cn/cpp/cpp/enumerations-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/122032|122032.cpp|修改源码|
|12| for each | 不支持| 不支持for each 语法 | AI生成| for_each_extension.cpp|修改源码|
|13| 声明和定义（decltype） |部分支持|Clang 在 decltype 上下文中将 static_cast<Base&>(*this) 视为试图将 Base&（非 const 左值引用）绑定到一个 Derived 对象，而没有正确考虑继承关系。|https://learn.microsoft.com/zh-cn/cpp/cpp/decltype-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/114024|114024.cpp|修改源码|
|14| 初始值设定项(list) |部分支持|此处为msvc初始化不严谨|https://learn.microsoft.com/zh-cn/cpp/cpp/initializers?view=msvc-140 & https://github.com/llvm/llvm-project/issues/120409|120409.cpp|修改源码|
|15| 继承（private） |部分支持|此处为msvc初始化不严谨|https://learn.microsoft.com/zh-cn/cpp/cpp/inheritance-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/121258|121258.cpp|修改源码|
|16| 析构函数 |部分支持|此处为msvc初始化不严谨|https://learn.microsoft.com/zh-cn/cpp/cpp/destructors-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/121319|121319.cpp|修改源码|
|17|模板 |部分支持|具有默认非类型参数的模板类永远不会与具有可变模板参数的函数的返回类型匹配C++ 的模板参数匹配规则要求模板参数的数量和类型严格匹配。tuple<Args...> 试图将参数包 Args... 直接映射到 tuple<T1, T2>，但 Args... 只提供类型参数（例如 <int>），而 T2 是一个非类型参数，编译器无法自动将 Args... 映射到 T1 和 T2 的组合。即使 T2 有默认值 0，C++ 的模板推导不会自动将 tuple<int> 解析为 tuple<int, 0>，因为 Args... 是一个类型参数包，而 T2 是一个非类型参数，二者的性质不同，无法直接匹配。|https://learn.microsoft.com/zh-cn/cpp/cpp/templates-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/121381|121381.cpp|修改源码|
|18| 模板 |部分支持|模板函数template<typename MUT> void f(MUT t)是显式模板函数实例化的可行候选者，但是 clang 没有注意|https://learn.microsoft.com/zh-cn/cpp/cpp/templates-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/121924|121924.cpp|修改源码|
|19| 模板 |部分支持|Clang 未能考虑在实例化上下文中可到达的默认参数|https://learn.microsoft.com/zh-cn/cpp/cpp/templates-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/135442|135442.cpp|修改源码|
|20| 模板 |部分支持|[ClangCL] 显式模板实例化与 dllexport 结合的不兼容行为|https://learn.microsoft.com/zh-cn/cpp/cpp/templates-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/140258|140258.cpp|修改源码|
|21| 非类型模版参数 |部分支持|强制转换指向成员的指针模板参数 |https://github.com/llvm/llvm-project/issues/33055|test11.cpp|修改源码|
|22| template |部分支持|Microsoft 模式下的模板不允许从一种类型转换为另一种类型|https://github.com/llvm/llvm-project/issues/17225|test18.cpp|修改源码|
|23| template |部分支持|MSVC 允许不完整类型作为模板参数|https://github.com/llvm/llvm-project/issues/17598|test17.cpp|修改源码|
|24| protected |部分支持|受保护的 typedef 无法在派生类中访问|https://github.com/llvm/llvm-project/issues/19514|test16.cpp|修改源码|
|25| friend |部分支持|父类中受保护的友元函数将无法编译|https://github.com/llvm/llvm-project/issues/20060|test15.cpp|修改源码|
|26| __declspec 修饰符中的 Microsoft 关键字（noreturn） |部分支持|gcc、clang 和 MSVC 都提供了编译器特定的机制来指示函数是否“无返回值”。gcc 和 clang 有attribute((noreturn))，而 MSVC 有__declspec(noreturn)。gcc 和 MSVC 将其编译器特定的属性视为满足第一个声明属性的要求，但 clang 却不这做。|https://learn.microsoft.com/zh-cn/cpp/cpp/noreturn?view=msvc-140 & https://github.com/llvm/llvm-project/issues/131700|131700.cpp|修改源码|
|27| __declspec 修饰符中的 Microsoft 关键字（noreturn） |部分支持|gcc、clang 和 MSVC 都提供了编译器特定的机制来指示函数是否“无返回值”。gcc 和 clang 有attribute((noreturn))，而 MSVC 有__declspec(noreturn)。gcc 和 MSVC 将其编译器特定的属性视为满足第一个声明属性的要求，但 clang 却不这做。|https://learn.microsoft.com/zh-cn/cpp/cpp/noreturn?view=msvc-140 & https://github.com/llvm/llvm-project/issues/131700|131700.cpp|修改源码|
|28| __declspec(naked)| 不支持| Clang 没有直接等效的 naked 属性。它可能会忽略它或报错。 | https://learn.microsoft.com/zh-cn/cpp/cpp/rules-and-limitations-for-naked-functions?view=msvc-140 | nkdfastcl.cpp |修改源码|
|29|__declspec |部分支持|__declspec(selectany) 的使用限制 |https://github.com/llvm/llvm-project/issues/110208|test9.cpp|修改源码|
|30| 重载 |部分支持|[clang] 在重载解析期间，clang 无法识别从具有 const 限定的 prvalue 到 rvalue ref 的引用绑定，因为该引用格式不正确由于引用不兼容MyString&&而无法绑定到结果|https://learn.microsoft.com/zh-cn/cpp/cpp/explicit-overrides-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/132600|132600.cpp|修改源码|
|31| 显式重写 |部分支持|不兼容|https://learn.microsoft.com/zh-cn/cpp/cpp/explicit-overrides-cpp?view=msvc-140|deriv_Explicit.cpp|修改源码|
|32|匿名类类型 |部分支持| 未添加-Wmicrosoft-anon-tag编译选项 ||test3.c|增加编译选项|
|56|类的显示重写 |部分支持| CLI的缘故 ||test1.cpp|修改源码|
|33| constexpr (C++) |部分支持|[clang-cl]constexpr字段不能引用 DLL 导出的符号|https://learn.microsoft.com/zh-cn/cpp/cpp/constexpr-cpp?view=msvc-140 & https://github.com/llvm/llvm-project/issues/145400|145400.cpp|修改源码|
|34| constexpr| 不支持| 在 constexpr 上下文中，在对象生命周期之外使用它是一个硬性错误。 | https://github.com/llvm/llvm-project/issues/116969| constexpr_member_lifetime_order.cpp |修改源码|
|35| Variadic 宏 |部分支持|语法不一致|https://learn.microsoft.com/zh-cn/cpp/preprocessor/variadic-macros?view=msvc-140|MACRO.cpp|修改源码|
|36| Pragma指令（pack杂注） |部分支持|pack-pop的语法不一致|https://learn.microsoft.com/zh-cn/cpp/preprocessor/pack?view=msvc-140|pack-pop.cpp|修改源码|
|37| Pragma指令（pack杂注） |部分支持|pack-pop的语法不一致|https://learn.microsoft.com/zh-cn/cpp/preprocessor/pack?view=msvc-140|pack-pop.cpp|修改源码|
|38| Pragma指令（init_seg） |部分支持|语法不一致|https://learn.microsoft.com/zh-cn/cpp/preprocessor/init-seg?view=msvc-140|pragma_init_seg.cpp|修改源码|
|39| 宏令牌粘贴 |部分支持|VC++ 运行时 clang-cl 预处理器错误 |https://github.com/llvm/llvm-project/issues/27754|test13.cpp|修改源码|
|40| 宏调用与展开 |部分支持|VC++ 工作时，扩展中的 clang-cl 预处理器错误 |https://github.com/llvm/llvm-project/issues/27756|test12.cpp|修改源码|
|41| tile_static| 不支持| Clang 根本不支持 C++ AMP| https://learn.microsoft.com/zh-cn/cpp/cpp/tile-static-keyword?view=msvc-140 | amp_tiled_average.cpp|修改源码|
|42| __vectorcall | 不支持| 对 __vectorcall 及其相关的复杂同构向量聚合 (HVA) 规则的支持是有限的或根本不存在的 | https://learn.microsoft.com/zh-cn/cpp/cpp/vectorcall?view=msvc-140| crt_vc64.cpp|修改源码|
|43| restrict | 不支持| Clang 完全没有 C++ AMP 的支持。它不认识 restrict(amp) 关键字，也不支持相关的 amp.h 库。 | https://learn.microsoft.com/zh-cn/cpp/cpp/restrict-cpp-amp?view=msvc-140| test_restrict.cpp |修改源码|
|44| AVX| 支持| 可通过添加编译选项[-mavx]来解决，它指示编译器启用对 AVX 指令集的支持。一旦启用，编译器就能识别 __m256 及其相关的内在函数| AI生成| test_avx.cpp|增加编译选项|
|45|noop|部分支持|__noop 的 sema 错误|https://github.com/llvm/llvm-project/issues/14453|test19.cpp|修改源码|
|| static_assert |部分支持|typdef 、模板扩展和条件编译错误|https://github.com/llvm/llvm-project/issues/26968|test14.cpp|修改源码|
|46| [[maybe_unused]] 属性 |部分支持|不能直接用于函数类型的参数列表中 |https://github.com/llvm/llvm-project/issues/108095|test10.cpp|修改源码|
|47|lambda表达式 |部分支持| CLI的缘故 |https://learn.microsoft.com/zh-cn/cpp/cpp/examples-of-lambda-expressions?view=msvc-140|test8.cpp|修改源码|
|48|异常处理 |部分支持| 未添加/EHa编译选项 |https://learn.microsoft.com/zh-cn/cpp/cpp/exception-handling-differences?view=msvc-140|test7.cpp|增加编译选项|
|49|noexcept |部分支持| noexcept 中直接使用了类型特性 std::is_pod<T> |https://learn.microsoft.com/zh-cn/cpp/cpp/noexcept-cpp?view=msvc-140||修改源码|
|50|异常处理 |部分支持| 未添加/EHsc编译选项 |https://learn.microsoft.com/zh-cn/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-140|test6.cpp|增加编译选项|
|51| **`C++/CLI`**| 不支持| Clang15.0.7完全不支持C++/CLI 扩展 | AI生成| cli_extension.cpp |修改源码|


<!-- ||支持| warning；通过非限定名在依赖基类中查找成员 foo 的做法，是微软的一个编译器扩展，可通过添加编译选项-Wno-microsoft-template解决 | AI生成| test_delayed_template.cpp | -->
<!-- |34| __declspec(appdomain)| 不支持| CLI | https://learn.microsoft.com/zh-cn/cpp/cpp/appdomain?view=msvc-140 | declspec_appdomain.cpp|修改源码|
|35| __declspec(hybrid_patchable) | 不支持| warning: __declspec attribute 'hybrid_patchable' is not supported | https://learn.microsoft.com/zh-cn/cpp/cpp/hybrid-patchable?view=msvc-140| declspec_hybrid_patchable.cpp |修改源码|
|36| __declspec(safebuffers)| 不支持| warning: __declspec attribute 'safebuffers' is not supported| https://learn.microsoft.com/zh-cn/cpp/cpp/safebuffers?view=msvc-140 | declspec_safebuffers.cpp||
|37| __declspec(spectre)| 不支持| warning: __declspec attribute'spectre' is not supported | https://docs.microsoft.com/en-us/cpp/cpp/spectre?view=msvc-140| declspec_spectre.cpp|| -->
<!-- |42| Variadic 宏| 不支持| 讲不清，看文件| https://learn.microsoft.com/zh-cn/cpp/preprocessor/variadic-macros?view=msvc-140| variadic_macros.cpp || -->
## 四、测试集


测试集主要依据微软官方文档和部分issue编写，主要目的为语法通过编译。
我们在实践中发现，文档并没有将MSVC所有的专有特性写出，因此采取了从issue中补充的办法，以增加全面性。
目前共有数十个测试用例，来源清晰，依据明确。此外，我们在源码达到测试集要求后也会用实际工程项目来进行自我测验，进一步测试clang-cl的兼容性。
