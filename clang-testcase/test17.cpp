// .\clang-testcase\test17.cpp(2,27): error: expected class name
// struct InherType : public UndefType {};
//                           ^
// 1 error generated.
//https://github.com/llvm/llvm-project/issues/17598
//author:欧阳照林
//MSVC 允许不完整类型作为模板参数
template <class T>
struct InherType : public UndefType {};
template <class T>
class TmplType {};
TmplType<InherType<wchar_t> > x;
int main(){}