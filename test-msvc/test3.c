// .\clang-testcase\test3.c(15,5): warning: anonymous structs are a Microsoft extension [-Wmicrosoft-anon-tag]
//     struct phone;    // Anonymous structure; no name needed
//     ^
// 1 warning generated.
//clang-cl -fsyntax-only -Wno-c++11-narrowing -Wno-microsoft-anon-tag .\clang-testcase\test3.c
//类和结构-继承-匿名类类型
//author: 欧阳照林
#include <stdio.h>
struct phone
{
    int  areacode;
    long number;
};

struct person
{
    char   name[30];
    char   gender;
    int    age;
    int    weight;
    struct phone;    // Anonymous structure; no name needed
} Jim;

int main()
{
    Jim.number = 1234567;
    printf_s("%d\n", Jim.number);
}
//Output: 1234567