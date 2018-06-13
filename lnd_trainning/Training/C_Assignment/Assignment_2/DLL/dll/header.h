#include<stdio.h>
#include<malloc.h>
typedef struct st
{
        struct st *llink;
        int roll;
        struct st *rlink;
}ST;

void add_begin();
void display();
int add_at_pos(int ,int );
int add_bef_pos(int ,int );
int add_aft_pos(int ,int );
int add_bef_num(int ,int );
int add_aft_num(int ,int );
int add_middle(int );

