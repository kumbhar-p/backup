#include"headers.h"
int input_strncat(void)
{

    char *str1 = NULL;
    char *str2 = NULL;
    char *hold = NULL;
    int n;
    printf("enter number of bytes to concatinate:");
    n = myatoi();
    printf("enter the string 1:");
    str1 = str_valid();
    printf("enter the string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s", str1);
    printf("string 2 is:");
    printf("%s", str2);
    hold = user_strncat(str1, str2, n);
    printf("string one after concatinate operation:");
    printf("%s\n",hold);
    return 0;
}
char *user_strncat(char *str1, const char *str2, int n)
{
    char *temp=0;
    temp = str1;
    while(*str1)
        str1++;
    str1--;
    while(n>0){
        *str1++ = *str2++;
        n--;
    }
    *str1 = 0;
    return temp;
}

