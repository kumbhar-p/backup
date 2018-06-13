#include"header.h"

extern ST *hptr;
extern int count ;

int delete_bef_num(int num)
{
	ST *temp = hptr;
	
	if(hptr == NULL)
		return 0;
	else if(hptr -> roll == num) 
			return 0;
	else {
		if(hptr -> link -> roll == num) {
			hptr = hptr -> link;
			return 1;
		}
			 
		while(temp -> link -> link -> roll != num) 
			temp = temp -> link;
		
	//	if(temp -> link == NULL)
	//		return 0;
	//	else
			temp -> link = temp -> link -> link;
		}
	
	return 1;
}
