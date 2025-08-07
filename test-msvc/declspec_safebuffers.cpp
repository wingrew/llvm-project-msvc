// 文档 /Microsoft专用的修饰符/__declspec/safebuffers
// warning: __declspec attribute 'safebuffers' is not supported [-Wignored-attributes]
// Author：廖中煜
typedef struct
{
    int x[20];
} BUFFER;
static int checkBuffers()
{
    BUFFER cb;
    // Use the buffer...
    return 0;
}
static __declspec(safebuffers) int noCheckBuffers()
{
    BUFFER ncb;
    // Use the buffer...
    return 0;
}
int wmain()
{
    checkBuffers();
    noCheckBuffers();
    return 0;
}