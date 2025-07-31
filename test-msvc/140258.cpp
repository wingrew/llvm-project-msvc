/*
[ClangCL] 显式模板实例化与 dllexport 结合的不兼容行为
*/

template <typename T> struct Outer {
	struct Inner {
		void f() {}
	};
};
template struct __declspec(dllexport) Outer<int>::Inner;

int main() {
	return 0;
}