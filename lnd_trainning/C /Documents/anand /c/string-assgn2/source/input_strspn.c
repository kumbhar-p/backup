#include"headers.h"
int input_strspn(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int temp= 0;
    printf("enter string 1:");
    str1 = str_valid();
    printf("enter string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s\n",str1);
    printf("string 2 is:");
    printf("%s\n",str2);
    temp = user_strspn(str1,str2);
    printf("after string span  operation:");
    printf("%d\n",temp);
    return 0;
}
int user_strspn(const char *str1, const char *str2)
{
    int i = 0;
    int j=0;
    int count=0;
    while(*(str1+i)){
        j=0;
        while(*(str2+j)){

            if(*(str1+i) == *(str2+j)){
                count = i+1;
                if(*(str2+j+1) == '\n' || (*str2+j+1) =='\0' )
                    return count;
                break;
            }

            j++;

        }

        i++;
    }	
    return count;
}










