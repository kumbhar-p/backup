  /*   header.h   */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define BUF 512 

#define BIT_TS(num, pos)  (num >> pos) & 1 ? num : num | (1 << pos)  
						  
                        

#define FIND_MIN(num, num1)  (((num - num1) >> 31) ? 0 : 1)

#define FIND_MAX(num, num1)  (((num - num1) >> 31) ? 0 : 1)
								
#define CLR_RIGHT_SET_BIT(num) num & (num - 1)

#define CLR_LEFT_SET_BIT(num, i) (num >> i) & 1

#define SET_RIGHT_CLR_BIT(num) num | (num + 1)

#define SET_LEFT_CLR_BIT(num, i) (num >> i) & 1 

#define SET_S_TO_D_BIT(num, s, d) ( ~((~0) << ((d - s) + 1))) << s

#define CLR_S_TO_D_BIT(num, s, d)  ( ~(( ~((~0) << ((d - s) + 1))) << s) )

#define TOGGLE_S_TO_D_BIT(num, s, d) (num ^ ((num1 & ((~((~0)) << (d))) << s) | ((~((~0) << (d))) << (s))) )
	
#define GET_BITS(num, s, n) (num & ((~((~0) << ((d + 1)-s))) << s)) 

void display(int num);
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);
char *input_validation(char *target);
int num_validation(int num);
char *my_malloc();
int scan_input_num();
int scan_s_pos();
int scan_d_pos();
int scan_n_bits();
int scan_choice();
int bit_swp(int ,int ,int );
int bit_swap(int ,int ,int ,int );       //swp bits between two numbers
int bit_copy(int ,int ,int ,int,int );
int even_bit_toggle(int );
int odd_bit_toggle(int );
int left_rotate_bits (unsigned int );
int left_rotate_nbits (unsigned int ,int );
int right_rotate_bits (unsigned int );
int right_rotate_nbits (unsigned int ,int );
int count_bit_set(int );
int count_bit_clear(int );
int cnt_leading_set_bits (int ); 
int cnt_leading_cleared_bits (int );
int cnt_trailing_cleared_bits (int );
int cnt_trailing_set_bits (int ); 
int invert_bits(int num,int s,int n);
int set_bits(int num,int num1,int s,int n);


