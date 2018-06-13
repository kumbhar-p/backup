#include"headers.h"
char * str_valid(void)
{
    int i=0;
    char *str=NULL;
    char *a = NULL;
    str = (char *) malloc(MAX*sizeof(char));
    if(str == NULL)
        perror("malloc");
    fgets(str,MAX,stdin);

    for(i=0;str[i]!='\n';i++){
        if(!((str[0] >='a' && str[0] <='z') || (str[0] >= 'A' &&  str[0] <= 'Z'))){
            printf("invalid string1:\n");
            a =	 str_valid();
            return a;
        }

        else{
            if((str[i] >='a' && str[i] <='z') || (str[i] >= 'A' &&  str[i] <= 'Z') || (str[i] >='0' && str[i] <= '9') || (str[i] == ' ')|| (str[i] == '\t') || (str[i] == '\n' )) {
                continue;
            }
            else{
                printf("invalid string2:\n");
                a =	 str_valid();
                return a;
            }
        }
    }
    printf("valid string :\n");
    return str;
}	

