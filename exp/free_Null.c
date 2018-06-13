#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p = malloc(10);
    scanf("%s",p);
    p = NULL;
    free(p);
}
