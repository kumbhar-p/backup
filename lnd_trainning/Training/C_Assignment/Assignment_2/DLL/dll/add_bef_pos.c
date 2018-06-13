#include"header.h"

extern ST *hptr;
extern int count;

int add_bef_pos(int pos, int num)
{
	ST *temp = hptr;
	ST *new = (ST *) malloc(sizeof(ST));

	new -> roll = num;
	if(pos > count) {
		printf("wrong pos\n");
		return 0;
	}
	if(pos == 1 || pos == 2) {
		new -> llink = NULL;
		new -> rlink = hptr;
		hptr = new;
		new -> rlink -> llink = new;
		return 1;
	}
	else {
		pos -= 3;
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
