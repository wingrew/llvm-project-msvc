/*
在 MS 模式下，我们假设所有枚举都具有明确的底层类型int。
这几乎是我们应该做的，但并非完全是。
MS 枚举始终为 4 个字节且默认带符号，但它们没有明确的底层类型，因此这种缩小范围的检查误导

-Wno-c++11-narrowing 检查严格性
*/

typedef enum {
    MD_EXCEPTION_CODE_WIN_FLOAT_INEXACT_RESULT = 0xc000008f,
} MDExceptionCodeWin;

extern void g() {}
extern void h() {}

void
f(unsigned int code)
{
    switch (code) {
    case MD_EXCEPTION_CODE_WIN_FLOAT_INEXACT_RESULT:
        g();
        break;
    default:
        h();
        break;
    }
}

int main() {
    return 0;
}
