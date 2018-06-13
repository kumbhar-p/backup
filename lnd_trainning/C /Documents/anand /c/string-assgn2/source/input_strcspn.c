#include"headers.h"
int input_strcspn(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int temp = 0;
    printf("enter string 1:");
    str1 = str_valid();
    printf("enter string 2:");
    str2 = str_valid();
    printf("string 1 is:");
    printf("%s\n",str1);
    printf("string 2 is:");
    printf("%s\n",str2);
    temp = user_strcspn(str1,str2);
    printf("after string span  operation:");
    printf("%d\n",temp);
    return 0;
}
int user_strcspn(const char *str1, const char *str2)
{
    int i = 0;
    int j = 0;
    int count2=0;
    for(i = 0 ; str1[i] ; i++){
        for(j = 0; str2[j] ; j++){
            if( str1[i] != str2[j]){
                continue;
            }
            else{
                count2++;
                break;
            }
        }
        if(count2 == 0)
            continue;
        else
            break;
    }

    return i;

}


