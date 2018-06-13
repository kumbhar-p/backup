#include"header.h"

int main(void)
{
    int i;
    int ch;
    int key;
    int index;
    for(i = 0; i < SIZE; i++)
        hash_table[i].status = EMPTY; 
    while(1) {
        printf("1. Insert  2. search  3. Delete  4. Display  5. Exit\n");
        printf("Enter ur choice\n");
        scanf("%d",&ch);
        switch(ch) {
            case 1 :
                printf("Enter empid, name & age\n");
                scanf("%d %s %d",&emp_rec.empid,emp_rec.name,&emp_rec.age);
                    if(insert())
                        printf("Record inserted\n");
                    else
                        printf("Insertion failed\n");
                break;
            case 2 :
                printf("Enter the key to be searched\n");
                scanf("%d",&key);
                if(index = search(key))
                    printf("Key found at index - %d\n",index);
                else
                    printf("Key not found\n");
            case 3 :
                printf("Enter the key to be deleted\n");
                scanf("%d",&key);
                if(!delete(key))
                    printf("deletion failed\n");
            case 4 :
                display();
                break;
            case 5 :
                exit(1);
          }
      }
    return 0;
}
      
