#include"headers.h"
int input_squeeze(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    char *hold = 0;
    hold = str1;
    printf("enter the string 1:");
    str1 = str_valid();
    printf("enter the string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s",str1);
    printf("string 2 is:");
    printf("%s",str2);
    hold = user_squeeze(str1,str2);
    printf("string after deleting operation:");
    printf("%s\n",hold);
    return 0;
}
char *user_squeeze(char *str1, char *str2)
{
    char *temp1 = str1;
    char *temp = str2;
    while(*str1)	{
        temp = str2;
        while(*temp){
            if( *str1 == *temp ) {
                memmove(str1,str1+1,strlen(str1+1)+1);
                str1--;
            }
            temp++;
        }
        str1++;

    }


    return temp1;
}

