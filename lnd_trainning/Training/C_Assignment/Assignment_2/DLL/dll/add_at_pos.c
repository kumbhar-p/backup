#include"header.h"

extern ST *hptr;
extern int count;

int add_at_pos(int pos, int num)
{
	ST *temp = hptr;
	ST *new = (ST *) malloc(sizeof(ST));

	new -> roll = num;
	if(pos > (count + 1)) {
		printf("wrong pos\n");
		return 0;
	}
	if(pos == 1) {
		new -> llink = NULL;
		new -> rlink = hptr;
		hptr = new;
		new -> rlink -> llink = new;
		return 1;
	}
	else {
		pos -= 2;
		while(pos) {
		    temp = temp -> rlink;
		    pos--;
		}
			new -> rlink = temp -> rlink;
			new -> llink = temp;
			temp -> rlink = new;
			if(new -> rlink != NULL)
			      new -> rlink -> llink = new;
		
	}
	return 1;
}	
