#include<stdio_ext.h>
#include<stdlib.h>

#define BUF 512

typedef struct st
{
	int roll;
	struct st *link;
}ST;


void display(void);
void add_begin(void);
char *my_fgets(char *ch);
int my_atoi(char *op);
char *remove_n(char *);
char *input_validation(char *);
int delete_first(void);
int delete_end(void);
int delete_at_pos(int );
int delete_bef_pos(int );
int delete_aft_pos(int );
int delete_bef_num(int );
int delete_aft_num(int );

