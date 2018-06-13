#include"header.h"

extern ST *hptr;
extern int count ;

int delete_at_pos(int pos)
{
	ST *temp = hptr;
	
	if(pos > count)
		return 0;
	if(hptr == NULL)
		return 0;
	else if(hptr -> link == NULL && pos == 1) 
			hptr = NULL;
	else {
		if(pos == 1)
			hptr = hptr -> link;
		else {
			if(pos != 2) {
				while(pos > 0) { 
					temp = temp -> link;
					pos -= 3;
				}
			}
			if(temp -> link == NULL)
				return 0;
			else
				temp -> link = temp -> link -> link;
		}
	}
	
	return 1;
}
