#include<stdio.h>

#if 0
int main() 
{
    float a = 3.14, *fptr;
    fptr = &a;
    printf("Size of Float Pointer : %d\n", sizeof(fptr));
    return (0);
}
#endif

#if 0
#include<stdio.h>
int main()
{
    char ch;
    if(ch = printf(""))
        printf("It matters\n");
    else
        printf("It doesn't matters\n");
    return 0;
}
#endif

#if 0
int main()
{
    static int i;
    int j;
    for(j=0;j<=5;j+=2) 
        switch(j)
        {
            case 1: i++;break;
            case 2: i+=2;
            case 4: i%=2;j=-1;continue;
            default: --i; continue;
        }
   
    printf ("%d", i);
    return 0;
}
#endif

#if 1
int main()
{
    char c='0';
    printf("%d",c);
    return 0;
}

#endif
