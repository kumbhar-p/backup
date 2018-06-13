#include"header.h"
extern ST *hptr;

int delete_first(void)
{
	if(hptr == NULL)
		return 0;
	else if(hptr -> link == NULL)
		hptr = NULL;
	else 
		hptr = hptr -> link;
	
	return 1;
}
			
