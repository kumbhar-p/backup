#include"header.h"

extern count;

int delete_middle(void)
{
	int pos;
	pos = (count / 2) + 1;
	
	if(!delete_at_pos(pos))
       	return 0;
    else 
    	return 1;
	
}
