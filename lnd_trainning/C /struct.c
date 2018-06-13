#include<stdio.h>
#pragma pack(1)
struct st
{
    int a;
    char b;
};
int main(void)
{
    struct st s;
    printf("%d\n",sizeof(s));
}
