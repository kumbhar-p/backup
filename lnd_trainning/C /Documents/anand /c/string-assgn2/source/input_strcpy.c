#include"headers.h"
int input_strcpy()
{
    char *str1 = NULL;
    char *str2 = NULL;
    char *hold = NULL;
    printf("enter string 1:");
    str1 = str_valid();         // string validation
    printf("enter string 2:");
    str2 = str_valid();
    hold = str1;
    printf("string 1 is:");
    printf("%s",str1);
    printf("string 2 is:");
    printf("%s",str2);
    hold = user_strcpy(str1,str2);
    printf("string after copying operation:");
    printf("%s",hold);
    return 0;
}
char *user_strcpy(char *str1, char *str2)
{
    char *ptr=str1;
    while((*str1++ = *str2++) != '\0');
    return(ptr);
}


