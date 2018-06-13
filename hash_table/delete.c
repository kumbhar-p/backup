#include"header.h"
int delete(int key)
{
    int index;
    index = search(key);
    if(index == 0)
        return 0;
    else {
        hash_table[index].status = DELETED;
        return 1;
     }
    return 0;
}
         
