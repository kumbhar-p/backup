#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
enum type_of_record {EMPTY, DELETED, OCCUPIED};
typedef struct employee
{
    int empid;
    char name[20];
    int age;
 }ST;
typedef struct record
{
    struct employee info;
    enum type_of_record status;
}ST1;
ST emp_rec;
ST1 hash_table[SIZE];
int insert(void);
int hash(int );
void display();
int search(int );
int delete(int );
