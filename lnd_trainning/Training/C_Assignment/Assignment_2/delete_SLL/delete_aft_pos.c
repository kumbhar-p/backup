#include"header.h"

extern ST *hptr;
extern int count ;

int delete_aft_pos(int pos)
{
	ST *temp = hptr;
	
	if(pos > count)
		return 0;
	if(hptr == NULL)
		return 0;
//	else if(hptr -> link == NULL && pos == 1) 
//			return 0;
	else {
//		if(pos == 2)
//			hptr = hptr -> link;
//		else {
			while(--pos) { 
				temp = temp -> link;
		//		pos -= 4;
			}
			if(temp -> link == NULL)
				return 0;
			else
				temp -> link = temp -> link -> link;
		}
	
	
	return 1;
}
