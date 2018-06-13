#include"header.h"

extern ST *hptr;
extern int count;

int delete_bef_pos(int pos)
{
	ST *temp = hptr;
	if(pos > count || pos == 1) {
		printf("wrong pos\n");
		return 0;
	}
	pos -= 1;
	delete_at_pos(pos);
	return 1;
}	
