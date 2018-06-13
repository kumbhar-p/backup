#include"header.h"

void display(int size_cnt)
{
    int i;
    for(i = 0; i <= size_cnt; i++)
        if(table[i].count != 0 )    //&& table[i].count > 1)
        printf(" %d  %s\n",table[i].count, table[i].str);
    return ;
 }
