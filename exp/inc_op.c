#include<stdio.h>
#if 1
void sum(int a, int b)
{
    printf("%d %d\n",a,b);
}
int main()
{
    int a = 0, b = 1;
    int c, d = 1;
    c = a++ + a;
    printf("%d\n",c);
    a = 1;
    printf("%d, %d, %d", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++);
}
#endif

#if 0
#include <stdio.h> 
int main()
{
    int x = 5;
    printf("%d %d\n",x++, x++);
    printf("%d",x);
    return 0;
}
#endif
