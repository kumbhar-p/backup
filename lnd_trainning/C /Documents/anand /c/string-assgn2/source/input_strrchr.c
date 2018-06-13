#include"headers.h"
int input_strrchr(void)
{
    char *str1 = NULL;
    char *hold = NULL;
    char ch;
    printf("enter string 1:");
    str1 = str_valid();
    hold = str1;
    printf("enter the charracter to search:");
    ch = getchar();
    printf("string 1 is:");
    printf("%s",str1);
    hold = user_strrchr(str1,ch);
    printf("string after copying operation:");
    printf("%s",hold);
    return 0;
}
char *user_strrchr(const char *str1,int ch)
{
    char *temp = NULL;
    while(*str1++){
        if((*str1) == ch)
            temp =(char *) str1;
        continue;
    }
    return temp;
}
