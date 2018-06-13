#include"header.h"

extern ST *hptr;
extern int count;

int add_aft_num(int num, int num1)
{
	ST *temp = hptr;
	int p = 0;

	while(temp) {
		if(num != temp -> roll) 
			p++;
		else
			break;
		temp = temp -> rlink;
	}
	p += 1;
	add_aft_pos(p, num1);
	return 1;
}	
