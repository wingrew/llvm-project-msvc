/*
错误的原因是 base 类通过私有继承使得 payload 类型对 derived 类不可见，
导致 friend class payload; 无法解析。
*/
struct payload {};

struct base : private payload {
};

struct derived : base {
    friend class payload;
};

int main() {
    return 0;
}