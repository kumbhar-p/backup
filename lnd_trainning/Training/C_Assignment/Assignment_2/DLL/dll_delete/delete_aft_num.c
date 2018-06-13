#include"header.h"

extern ST *hptr;
extern int count;

int delete_aft_num(int num)
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
	if(temp -> rlink == NULL) 
		return 0;
	if(p == 0) {
	   p = 2;
	   delete_at_pos(p);
	   return 1;
	}
	p += 2;
	delete_at_pos(p);
	return 1;
}	
