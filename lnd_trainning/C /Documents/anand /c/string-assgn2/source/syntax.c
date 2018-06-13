#include<stdio.h>
#include<stdlib.h>
int syntax(void)
{
    FILE *fp;
    int count = 0;
    int i = 0;
    char *buf = NULL;
    char ch;
    char stk[30];
    int top = -1;
    fp = fopen("kumar","r");
    count = fseek(fp,0,2);
    rewind(fp);
    buf = (char *) malloc(count+1);
    while((ch = fgetc(fp))  != EOF){
        buf[i++] = ch;
    }

    for(i = 0; buf[i] ; i++){
        if(buf[i] == 40 ){
            top++;
            stk[top] = buf[i];
        }
        if( buf[i] == 123){
            top++;
            stk[top] = buf[i];
        }
        if( buf[i] == '['){
            top++;
            stk[top] = buf[i];
        }

    }

    for(i = 0; buf[i] ; i++) {
        if(buf[i] == 41){
            if(stk[top] == '(' ){
                top--;					
            }
            else{
                printf("unbalanced1");
                return 0;
            }
        }
        if(buf[i] == 125){
            if(stk[top] == '{' ){          
                top--;
            }
            else{
                printf("unbalanced2");
                return 0;
            }
        }
        if(buf[i] == ']'){
            if(stk[top] == '[' ){          
                top--;
            }
            else{
                printf("unbalanced3");
                return 0;
            }
        }

    }


    if(top == -1) {
        printf("balanced:\n");
        return 0;
    }
    else {
        printf("unbalanced:\n");
        return 0;
    }

}
