#include"header.h"
int insert()
{
    int key = emp_rec.empid;
    int index;
    int i;
    int p;
    p = hash(key);
    index = p;
    for(i = 1; i < SIZE; i++) {
        if(hash_table[index].status == EMPTY || hash_table[index].status == DELETED) {
            hash_table[index].info = emp_rec;
            hash_table[index].status = OCCUPIED;
            return 1;
         }
        index = (p + i) % SIZE;
    }
    return 0;
 }

int hash(int key)
{
    return key % SIZE;
}
