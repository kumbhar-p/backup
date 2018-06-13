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
int delete_at_pos(int );
int delete_bef_pos(int );
int delete_aft_pos(int );
int delete_bef_num(int );
int delete_aft_num(int );
int delete_middle( );

