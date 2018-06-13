#include<stdio.h>
int rem_blanks(void)
{
    FILE *fp;
    FILE *fp1;
    char ch;
    fp = fopen("kumar.c","w+");
    fp1=fopen("kumar","w");
    while((ch = getchar()) != EOF)
        fputc(ch,fp);
    rewind(fp);
    while((ch = fgetc(fp)) == ' ')
        continue;
    fputc(ch , fp1);
    while( (ch = fgetc(fp)) != EOF ) {
        if((ch != ' ' ) && (ch != '\t')){
            fputc(ch , fp1);
            printf("if1 = %c\n",ch);
        }
        else {
            fputc(ch,fp1);
            while((ch = fgetc(fp) )) {
                if(ch == ' ' || ch == '\t' ||ch == '\n')
                    continue;
                else{
                    fputc(ch , fp1);
                    break;
                }
            }
        }
        if((ch == '\n')){
            while((ch = fgetc(fp))) { 
                if( ch == ' ' || ch == '\n')
                    continue;
                else {
                    fputc(ch,fp1);
                    break;}

            }
        }
    } 
    return 0;
}
