// 如果以 L 为前缀的宽字符文本包含多字符序列，则值取自第一个字符，并且编译器会引发警告 C4066。 将忽略后续字符，这不同于等效普通多字符文本的行为。
wchar_t w1 = L'\100';   // L'@'
wchar_t w2 = L'\1000';  // C4066 L'@', 0 ignored
wchar_t w3 = L'\009';   // C4066 L'\0', 9 ignored
wchar_t w4 = L'\089';   // C4066 L'\0', 89 ignored
wchar_t w5 = L'\qrs';   // C4129, C4066 L'q' escape, rs ignored
wchar_t w6 = L'\x0050'; // L'P'
wchar_t w7 = L'\x0pqr'; // C4066 L'\0', pqr ignored