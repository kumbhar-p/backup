#include"header.h"

int main(int argc, char **argv)
{
    FILE *fp;
    int value;
    int size_cnt = 0;
    char str1[20];
    fp = fopen(argv[1],"r+");
    while(fscanf(fp,"%s",str1) != EOF) 
        size_cnt++;
    rewind(fp);
    while(fscanf(fp,"%s",str1) != EOF) {
        value = my_atoi(str1);
        insert(str1, value, size_cnt);
    }
    display(size_cnt);
    return 0;
}

int my_atoi(char *str1)
{
    int i;
    int val1 = 0;                                                             
        for(i = 0; *(str1 + i); i++)                                                
            val1 += *(str1 + i);       
    return val1;
}

