#include"headers.h"
int input_strncpy(void)
{

    char *str1 = NULL;
    char *str2 = NULL;
    char *hold = NULL;
    int n;
    printf("enter string 1:");
    str1 = str_valid();             // string validation
    printf("enter the string 2:");
    str2 = str_valid();
    printf("string one is:");
    printf("%s", str1);
    printf("string 2 is:");
    printf("%s", str2);
    printf("enter number of bytes to copy:");
    scanf("%d", &n);
    hold = user_strncpy(str1, str2, n);
    printf("string one after copying operation:");
    printf("%s\n", hold);
    return 0;
}
char *user_strncpy(char *str1,const char *str2,int n)
{
    char *temp=str1;
    while(n){
        *str1++ = *str2++;
        n--;
    }
    *str1 = '\0';
    return(temp);
} 
