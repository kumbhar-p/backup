#include"header.h"

extern ST *hptr;
extern int count;

int delete_at_pos(int pos)
{
	ST *temp = hptr;

	if(pos > (count + 1)) {
		printf("wrong pos\n");
		return 0;
	}
	if(pos == 1) {
		temp -> rlink -> llink = NULL;
		hptr = temp -> rlink;
		free(temp);
		temp = NULL;
		return 1;
	}
	else {
		pos -= 1;
		while(pos) {
		    temp = temp -> rlink;
		    pos--;
		}
			temp -> llink -> rlink = temp -> rlink;
			if(temp -> rlink != NULL)
		        	temp -> rlink -> llink = temp -> llink;
			        free(temp);
			temp = NULL;	
	}
	return 1;
}	
