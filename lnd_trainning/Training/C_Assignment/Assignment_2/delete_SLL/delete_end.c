#include"header.h"
extern ST *hptr;

int delete_end(void)
{
	ST *temp = hptr;
	if(hptr == NULL)
		return 0;
	else if(hptr -> link == NULL)
		hptr = NULL;
	else {
		while(temp -> link -> link != NULL) 
			temp = temp -> link;
		temp -> link = NULL;
	}
	
	return 1;
}
			
