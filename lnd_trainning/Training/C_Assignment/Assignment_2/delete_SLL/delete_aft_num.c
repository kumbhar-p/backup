#include"header.h"

extern ST *hptr;
extern int count ;

int delete_aft_num(int num)
{
	ST *temp = hptr;
	
	if(hptr == NULL)
		return 0;
	else if(hptr -> roll == num && hptr -> link == NULL) 
			return 0;
	else {
			 
		while(temp -> roll != num) 
			temp = temp -> link;
		
		if(temp -> link == NULL)
			return 0;
		else
			temp -> link = temp -> link -> link;
		}
	
	return 1;
}
