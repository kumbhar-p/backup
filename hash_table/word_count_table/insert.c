#include"header.h"

int insert(char *str1, int value, int size_cnt)
{
    int index;
    int p, i;
    int key = value;
    index = hash(key, size_cnt);
    p = index;
    for(i = 1; i <= size_cnt; i++) {
        if(strcmp(table[index].str, str1) == 0) {
            strcpy(table[index].str,str1);
            table[index].count++;
     //     table[index].status = OCCUPIED;
            return 0;
        } 
        else if(table[index].count == 0) {
         //     table[index].status = OCCUPIED;
                strcpy(table[index].str,str1);
                table[index].count++; 
            return 0;
        }
        index = (p + i) % size_cnt;
    }
}
int hash(int key, int size_cnt)
{ 
    return key % size_cnt;
}
