#include"headers.h"
int user_rotate()
{
    char *str1 = NULL ;
    char *str2 = NULL;
    int hold = 0;
    printf("string1:");
    str1 = input();
    printf("string2:");
    str2 = input();
    printf("string 1 is:");
    printf("%s\n",str1);
    printf("string 2 is:");
    printf("%s\n",str2);
    hold = user_rotator(str1,str2);
    if(hold == 0)
        printf("strings are different:\n");
    else 
        printf("output =%d\n",hold);
    return 0;
}
int user_rotator(char *str1,char *str2)
{

    int j = strlen(str1);
    int l = strlen(str2);
    int p = j-1;
    int x = j-1;
    int count = 0;
    int q = x;
    char ch;
    int k;
    char *temp = 0;
    temp = str1+p;
    if(j != l)
        return 0;
    if(strcmp(str1,str2) == 0)
        return l;;
    while(p){
        ch = *temp;
        x=q;
        while(x){
            *(str1+x) = *(str1+(x-1));
            x--;
        }
        *(str1+0) = ch;
        count++;
        k = strcmp(str1,str2);
        if(k == 0){
            printf("strings are equal:");
            // printf("%d\n", count);
            return count;
        }
        p--;

    }
    return 0;
}








