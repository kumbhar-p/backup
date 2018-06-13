#include<stdio.h>
#include<stdlib.h>
#define min_int(a,b)    ((((a>>i)&1 ^ (b >> i)&1))?(((a>>i)&1==1)?a:b):0) 
#define clr(num)        for(i=31;i>=0;i--){if(((num>>i)&1) == 1){num = num & (~(1<<i));break;}}
#define set(num,s,p)    for(i = 31;i >= 0; i--){if((i >= s) && (i <= p)) if(((num >> i)&1) == 0) num = num|(1 << i); }
#define togg(num,s,p)   for(i = 31;i >= 0;i--){if((i >= s) && (i <= d)) n1 = n1 ^ (1<<i); }

int  fun_even(void );
int bit_swap(void );
int fun_odd(void );
int bit_ts(void);
int reverse_bits( );
int count_bit(void);
int cpy_bits( );
int rotate_bitleft(int ,int );
int rotate_bitright(int ,int );
int trail(void);
int invert(void );
int rightshift(void );
int setbits(void );
int set_bit_pos(int,int ,int);
int toggle_bit(int,int,int);
int rotate(void);
int commandline(int,int,char);
int mul(int,int);
int div_num(int,int);
int  add(int,int);
int sub(int,int);
