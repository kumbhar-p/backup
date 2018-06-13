#include"header.h"

extern ST *hptr;
extern int count;

int delete_aft_pos(int pos)
{
	ST *temp = hptr;
	if(pos > count) {
		printf("wrong pos\n");
		return 0;
	}
	pos += 1;
	delete_at_pos(pos);
	return 1;
}	
