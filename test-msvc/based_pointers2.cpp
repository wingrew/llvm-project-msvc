// 文档 /Microsoft专用的修饰符/基于寻址/基指针
// __based 是一个 Microsoft 编译器特有的非标准扩展。 Clang 默认不识别和支持这个关键字。
// Author：廖中煜
#include <iostream>

int a1[] = {1, 2, 3};
int a2[] = {10, 11, 12};
int *pBased;

typedef int __based(pBased) * pBasedPtr;

using namespace std;
int main()
{
    pBased = &a1[0];
    pBasedPtr pb = 0;

    cout << *pb << endl;
    cout << *(pb + 1) << endl;

    pBased = &a2[0];

    cout << *pb << endl;
    cout << *(pb + 1) << endl;
}