#include"headers.h"
#include<string.h>
int input_strstr(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    char *hold = NULL;
    printf("enter string 1:");
    str1 = str_valid();
    printf("enter string 2:");
    str2 = str_valid();
    hold = str1;
    printf("string 1 is:");
    printf("%s", str1);
    printf("string 2 is:");
    printf("%s", str2);
    hold = user_strstr(str1, str2);
    printf("string after operation:%s",hold);
    return 0;
}
char *user_strstr(const char *str1, const char *str2)
{
    int i = 0;
    int j = 0;
    for(i = 0; str1[i] != '\n' ;i++) {
        if(str2[0] == str1[i]) {
            for(j = 1 ; str2[j] != '\n' ; j++) {
                if(str2[j] != str1[i+j])
                    break;
            }

            if(str2[j] == '\0'|| str2[j] == '\n' )
                return ((char *)str1+i);
        }

    }
    return NULL;
}
