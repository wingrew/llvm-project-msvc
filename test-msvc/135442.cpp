/*
Clang 未能考虑在实例化上下文中可到达的默认参数
*/
constexpr int f(int*, int) { return 42; }
constexpr int f(void*) { return 13; }

template <typename T>
constexpr int g() {
	return f(T{});
}

constexpr int f(int*, int = 0);  // (A)

static_assert(g<int*>() == 42, "");

int main() {
	return 0;
}