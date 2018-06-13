#include"header.h"
int search(int key)
{
    int index;
    int p;
    p = hash(key);
    index = p;
    int i;
    for(i = 1; i < SIZE; i++) {
        if(hash_table[index].status == EMPTY)
           return 0;
        if(hash_table[index].info.empid == key)
           return index;
        index = (p + i) % SIZE;
    }
    return 0;
}
         
