#include<stdio.h>
#include<string.h>
#define SIZE 200
typedef struct file
{
    int count;
    char str[10];
}ST;

ST table[SIZE];

int insert(char *, int , int );
int my_atoi(char *);
int hash(int , int );
void display(int );
           
           
           
