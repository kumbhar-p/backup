#include<stdio.h>
int main()
{
    int a = 1;
    const int b = a++ + ++a;
    printf("%d",b);
    printf("%d",a);
}
