#include"header.h"
void display()
{
    int i;
    for(i = 0; i < SIZE; i++) {
        if(hash_table[i].status == OCCUPIED) {
            printf("------Employee %d------\n",i);
            printf("\nEmpid - %d\nName - %s\nAge - %d\n\n", hash_table[i].info.empid, hash_table[i].info.name, hash_table[i].info.age);
        }
        else if(hash_table[i].status == DELETED) {
                printf("------Employee %d------\n",i);
                printf("  Deleted\n");
              }
             else {
                printf("------Employee %d------\n",i);
                printf("  Empty\n");
              }
        }
     return ;
}
        
