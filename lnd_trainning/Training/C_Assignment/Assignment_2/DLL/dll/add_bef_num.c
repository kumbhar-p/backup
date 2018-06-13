#include"header.h"

extern ST *hptr;
extern int count;

int add_bef_num(int num, int num1)
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
	if(p == 0) {
	   p = 1;
	   add_bef_pos(p, num1);
	}
	else		
	   add_aft_pos(p, num1);
	return 1;
}	
