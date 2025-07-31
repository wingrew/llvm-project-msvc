/*
Microsoft 特定的属性
[[gsl::suppress(<tag> [, justification: <narrow-string-literal>])]]
<tag> 是一个字符串，用于指定要隐藏的规则的名称。 该 optional justification 字段允许您解释禁用或禁止显示警告的原因。 指定选项 /analyze:log:includesuppressed 后，此值将显示在 SARIF 输出中。 它的值是 UTF-8 编码的窄字符串文字。 该 [[gsl::suppress]] 属性在 Visual Studio 2022 版本 17.14 及更高版本中可用。

Microsoft 特定的 [[gsl::suppress]] 属性用于抑制在代码中强制实施准则支持库 (GSL) 规则的检查器发出的警告。 例如，考虑以下代码片段
基本均无
*/
int main()
{
    int arr[10]; // GSL warning C26494 will be fired
    int* p = arr; // GSL warning C26485 will be fired
    [[gsl::suppress("bounds.1", justification: "This attribute suppresses Bounds rule #1")]]
    {
        int* q = p + 1; // GSL warning C26481 suppressed
        p = q--; // GSL warning C26481 suppressed
    }
}