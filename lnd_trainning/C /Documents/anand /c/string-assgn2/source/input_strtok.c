#include"headers.h"
int input_strtok(void)
{
    char *str1 = NULL;
    char *str2 = NULL;
    str1 = (char *)malloc (80 * sizeof(char));
    if(str1 == NULL)
        printf("malloc failed:\n");
    str2 = (char *) malloc (80 * sizeof(char));
    if(str2 == NULL)
        printf("malloc failed:\n");
    printf("enter the string 1:");
    fgets(str1, 80, stdin);
    printf("enter the string 1:");
    fgets(str2, 80, stdin);
    printf("string 1 is:");
    printf("%s \n", str1);
    printf("string 2 is:");
    printf("%s \n", str2);
    user_strtok(str1, str2);
    return 0;
}
char* user_strtok(char *str1, const char *str2)
{
    char *temp;
    int i;
    int j;
    for( i =0 ; str1[i] != '\n' ; i++) {
        for( j = 0; str2[j] != '\n' ; j++) {
            if(str1[i] == str2[j]){
                temp = str1+i+1;
                str1[i] = '\0';
                printf("%s\n",str1);
                str1 = temp;
                i = -1;
                break;
            }
        }
    }

    if(str1[i]=='\0' || str1[i] == '\n')
        printf("%s\n",str1);	

    return 0;

}

















char* input()
{
    char a;
    char *g = 0;
    int j = 1;
    int i = 0;
    g = malloc(1);
    while((a = getchar()) != '\n'){
        g[i] = a;
        g = realloc(g,j*sizeof(char));
        i++;
        j++;
    }
    g[i]='\0';
    return g;
}





	



