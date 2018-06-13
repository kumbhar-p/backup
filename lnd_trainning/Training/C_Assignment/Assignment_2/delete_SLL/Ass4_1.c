#include"header.h"

ST *hptr = NULL;
int count;
int main(void)
{
	char *ch = NULL;
	int op;
	int pos;
	int num;
	

	if(NULL == (ch = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	
	do {
		printf("enter the roll\n");
		add_begin();
		printf("do you wan't to add another node y/n\n");
		ch = my_fgets(ch);
	} while(*ch == 'Y' || *ch == 'y');
	
	display();
	printf("c-%d\n",count);

	printf("\n 1. delete at the beginning\n 2. delete at the end\n 3. Delete at a given position\n 4. Delete before a given position\n 5. Delete after a given position\n 6. Delete before a given number\n 7. Delete after a given number\n 8. Delete at the middle\n 9. Delete at penultimate node\n");
	ch = my_fgets(ch);
	op = my_atoi(ch);	

	switch(op) {
		case 1 :
			if(!delete_first())
				printf("list is empty\n");
			printf("After deletion\n");
			display();
			break;
		case 2 :
			if(!delete_end())
				printf("list is empty\n");
			printf("After deletion\n");
			display();
			break;
		case 3 :
			printf("enter the pos\n");
			ch = my_fgets(ch);
			pos = my_atoi(ch);	
			if(!delete_at_pos(pos))
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
		case 4 :
			printf("enter the pos\n");
			ch = my_fgets(ch);
			pos = my_atoi(ch);	
			if(!delete_bef_pos(pos))
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
		case 5 :
			printf("enter the pos\n");
			ch = my_fgets(ch);
			pos = my_atoi(ch);	
			if(!delete_aft_pos(pos))
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
		case 6 :
			printf("enter the num\n");
			ch = my_fgets(ch);
			num = my_atoi(ch);	
			if(!delete_bef_num(num))
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
		case 7 :
			printf("enter the num\n");
			ch = my_fgets(ch);
			num = my_atoi(ch);	
			if(!delete_aft_num(num))
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
		case 8 :
			if(!delete_middle())
				printf("node is not present\n");
			else {
				printf("After deletion\n");
				display();
			}
			break;
	}

	return 0;
}


void add_begin()
{
	ST *new = (ST *)malloc(sizeof(ST *));		
	char *str;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

	str = my_fgets(str);
	str = input_validation(str);
    new -> roll = my_atoi(str);

	if(hptr == NULL) {	
		new -> link = NULL;
		hptr = new;
	}
	else {
		new -> link = hptr;
		hptr = new;
	}
}

void display()
{
	ST *ptr = hptr;
	count = 0;

	if(ptr == NULL)
		printf("list is empty\n");
	else {
		printf("nodes are\n");
		while(ptr) {
			printf("%d -> ",ptr -> roll);
			ptr = ptr -> link;
			count++;
		}
		printf("\n");
	}
}
