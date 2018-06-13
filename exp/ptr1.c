#include "stdio.h" 
typedef int INT, *INTPTR, ONEDARR[10],TWODARR[10][10];
int main()
{
    void *pVoid;
//    INTPTR p;
    pVoid = (void*)0;
    printf("%lu",sizeof(pVoid));
    printf("num - %d\n",8);
    printf("num - %d\n",020);
    printf("num - %d\n",00200);
    printf("num - %d\n",0007000);

    return 0;
}

