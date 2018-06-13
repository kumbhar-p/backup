#include<stdio.h>
#if 0
_start()
{
    printf("hello\n");
    _exit(0);
}
#endif

#define fun m##a##i##n
int fun()
{
    printf("i am in fun function\n");
}
