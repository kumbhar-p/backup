#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strcpy(char *d, char *s) {
    
    int i = 0;
    while(*s) {
        *(d+i++) = *s++;
    }   
    *(d+i) = '\0';
    return 0 ;

} 
int main(void)
{
    char p[10];
    char q[10];
    char *t;
    printf("enter the string1\n");
    scanf("%s",p);
    my_strcpy(q, p);
    printf("%s\n",q);
}


