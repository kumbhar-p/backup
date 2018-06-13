#include"header.h"

extern ST *hptr;
extern int count;

int add_middle(int num)
{
	ST *temp = hptr;
	int p;
	p = count / 2;
	add_aft_pos(p, num);
	return 1;
}	
