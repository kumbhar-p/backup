#include"headers.h"
int input_strcasecmp(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int hold = 0;
    printf("enter the string 1:");
    str1 = str_valid();
    printf("enter the string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s",str1);
    printf("string 2 is:");
    printf("%s",str2);
    hold = user_strcasecmp(str1,str2);
    if(hold == 0)
        printf("both strings are equal:\n");
    else
        printf("both strings are not equal:\n");
    return 0;
}

int user_strcasecmp(const char *str1,const char *str2)
{

    int i;
    while(*str1){
        if((*str1) == (*str2)+32){
            str2++;
            str1++;
            continue;
        }
        if( (*str1) == (*str2)-32){
            str2++;
            str1++;
            continue;
        }
        else
            break;
    }
    i = *str1 - *str2;
    return i;
}



