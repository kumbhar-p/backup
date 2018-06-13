#include"header.h"

int delete_penultimate(void)
{
	ST *temp = hptr;

	if(hptr == 0)
		return 0;
	if(hptr -> link == 0)
		return 0;
	if(temp -> link -> link == NULL) {
		hptr = temp -> link;	
		return 1;
	}
	while(temp -> link -> link -> link == NULL) {
				
