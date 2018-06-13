#include<stdio.h>
typedef union st
{
    int a;
    char ch;
 }ST;
int main(void)
{
    ST s;
    s.a = 1;
    printf("%d\n",s.ch);
}

