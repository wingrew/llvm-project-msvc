// 文档 /Microsoft专用的修饰符/__declspec/spectre
// warning: __declspec attribute 'spectre' is not supported [-Wignored-attributes]
// Author：廖中煜
static __declspec(spectre(nomitigation)) int noSpectreIssues()
{
    // No Spectre variant 1 vulnerability here
    // ...
    return 0;
}

int main()
{
    noSpectreIssues();
    return 0;
}