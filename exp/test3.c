#include<stdio.h>
int main()
{
    char *p = "hello"
    
    char *q;
    printf("%s",p);
    q = (int *)p;
    printf("%s",p);
    printf("%s",q);
}
