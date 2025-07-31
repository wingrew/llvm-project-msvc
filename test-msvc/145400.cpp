/*
[clang-cl]constexpr字段不能引用 DLL 导出的符号
*/

__declspec(dllimport) void sum();
constexpr auto sumFn = sum;

int main() {
	return 0;
}


