#include<stdio.h>
int main(int argc, char **argv)
{
    int area;
    if (argc < 1)
        printf("usage:len,bre\n");
    area = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n",area);
}
