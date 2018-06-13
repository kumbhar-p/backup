/*  remove_newline.h   */
#define BUF 512

char* remove_n(char *target)
{
    int i;
    for(i = 0 ; i < BUF ; i++){
        if(*target == '\n'){
            *target = '\0';
            break;}
        target++;}
    return  target-i;
}

