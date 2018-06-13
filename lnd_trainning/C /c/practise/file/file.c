#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct st *link;
}ST;

ST *hptr = 0;
FILE *fp;

void add_begin();
void display();

int main(int argc, char **argv)
{
	char *num;
	char ch;

	if(argc < 2) {
		printf("usage :./a.out fname\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1],"r");
/*	do {
	    add_begin();
		printf("do u want to add node\n");
		scanf(" %c",ch);
	}while(ch == 'Y' || ch == 'y');
	display();

return 0;
}*/

	ST *new = (ST *)malloc(sizeof(ST));
	while(1) { 
		ST *new = (ST *)malloc(sizeof(ST));
		if(fscanf(fp,"%d",&new -> roll) != EOF) {
			if(hptr == 0) {
				new -> link = 0;
				hptr = new;
			}
			else {
				new -> link = hptr;
				hptr = new;
			}
		}
		else
			break;
	}
	display();
}
	
void display()
{
	ST *temp = hptr;
	while(temp) {
		printf("%d -> ",temp -> roll);
		temp = temp -> link;
	}
}
