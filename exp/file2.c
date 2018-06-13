#include<stdio.h>
int glob ;
int main()
{
    glob = 100;
    file2Fun();
    printf("%d", glob);
    return 0;
}
