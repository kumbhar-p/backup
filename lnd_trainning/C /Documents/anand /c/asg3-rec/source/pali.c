#include"headers.h"
int palindrome(void)
{
    int p = 0;
    int l;
    char *str = (char *)malloc(50);
    if(str == NULL){
        printf("malloc fail:");
        return 0;
    }
    printf("enter the string:");
    if(NULL == fgets(str,50,stdin)){
        printf("fgets fail:\n");
        return 0;
    }
    l = strlen(str);
    p = pali(str,l);
    p?printf("strng is palindrome\n"):printf("string is not palindrome\n");
    return 0;
}
int pali(char *str, int l) 
{
    static int i = 0;
    char *ch  = str-i;
    if( *str != '\n'){
        if( *str != ch[l-2] )
            return 0;
        i++;
        return pali(str+1, l-1);
    }
    else
        return 1;
}


