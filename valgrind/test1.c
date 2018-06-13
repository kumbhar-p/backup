#include<stdio.h>
int main()
{
    char *p = malloc(5);
   // p = "hell";
    scanf("%s",p);
    free(p);
    free(p);

}
