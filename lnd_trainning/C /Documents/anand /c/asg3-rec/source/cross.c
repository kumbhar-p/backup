#include"headers.h"
int cross_ref(void)
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch;
    int i = 0;
    int j = 0;
    int len = 0;
    int k = 0;
    int line = 0;
    int count = 0;
    if(NULL == (fp = fopen("abc","r")))
        perror("fopen1");
    if(NULL == (fp1 = fopen("def","w")))
        perror("fopen2");
    char buf[200];
    char str[20];
    while((ch = fgetc(fp)) != EOF)
        buf[i++] = ch;
    buf[i] = '\0';
    rewind (fp);
    for(i = 0,j = 0; buf[i] ; i++){
        count = 0;

        if(buf[i] != ' ' && buf[i] != '\t') {
            str[j++] =  buf[i] ;
            continue;
        }
        else {
            str[j] = '\0';
            for( ;buf[i] ; i++) {
                if(buf[i] == '\n')
                    line++;
                if((buf[i] == ' ') || buf[i] == '\n' )
                    continue;
                else
                    break;
            }
        }
        --i;
        bzero(str, 0);
        j = 0;
        len = strlen(str);
        for(k = 0; buf[k] ; k++) {
            if(buf[k] == '\n')
                line++;
            if(strncmp(str, buf+k, len) == 0) {
                ++count;
                printf("string:%s  :\n", str);
                printf("\t\toccured in line = %d\n", line);
            }
        }
        line = 0;
        printf("\t\tnumber of times occured  = %d\n", count);


    }
    return 0;

}
