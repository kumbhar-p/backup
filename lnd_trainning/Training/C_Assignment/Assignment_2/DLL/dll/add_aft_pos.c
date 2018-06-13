#include"header.h"

extern ST *hptr;
extern int count;

int add_aft_pos(int pos, int num)
{
	ST *temp = hptr;
	ST *new = (ST *) malloc(sizeof(ST));

	new -> roll = num;
	if(pos > count) {
		printf("wrong pos\n");
		return 0;
	}
		pos -= 1;
		while(pos) {
		    temp = temp -> rlink;
		    pos--;
		}
			new -> rlink = temp -> rlink;
			new -> llink = temp;
			temp -> rlink = new;
			if(new -> rlink != NULL)
			      new -> rlink -> llink = new;
		
	
	return 1;
}	
