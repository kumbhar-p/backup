#include"header.h"

extern ST *hptr;
extern int count;

int delete_middle()
{
	ST *temp = hptr;
	int p = 0;

	if(count == 1)
	    return 0;
	p = (count / 2) + 1;
	delete_at_pos(p);
	return 1;
}	
