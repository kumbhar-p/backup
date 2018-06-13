#include"header.h"

extern ST *hptr;
extern int count;

int delete_bef_num(int num)
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
	   delete_at_pos(p);
	}
	else		
	   delete_at_pos(p);
	return 1;
}	
