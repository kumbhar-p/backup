#include"headers.h"
int input_strncmp(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int hold;
    int n;
    printf("enter number of bytes to compare:");
    n = myatoi();
    printf("enter the string 1:");
    str1 = str_valid();
    printf("enter the string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s", str1);
    printf("string 2 is:");
    printf("%s", str2);
    hold = user_strncmp(str1, str2, n);
    if(hold == 0)
        printf("strings are equal:\n");
    else
        printf("strings are not equal:\n");
    return 0;

}
int user_strncmp(const char *str1, const char *str2,int n)
{
    int i;
    while( (*str1 !=0) &&(*str2 != 0) && n>0) {
        if(*str1 == *str2) {
            str1++;
            str2++;
            n --;
            continue;
        }
        else
            break;
    }
    i = *str1 - *str2;
    return i;
}

















