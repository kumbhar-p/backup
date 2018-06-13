#include<stdio_ext.h>
#include<stdlib.h>
#include<limits.h>

#define BUF 512

int add_end();
void display();
int add_middle();
char *my_fgets(char *str);

typedef struct st
{
	int roll;
	struct st *link;
}ST;

ST *hptr = 0;

int main(void)
{
	char ch;
//	char *str = NULL;
	
	do {
		add_end();
		printf("do u want to add node\n");
		__fpurge(stdin);
		ch = getchar();
	}while(ch == 'y' || ch == 'Y'); 
	display();
	add_middle();
	display();

	return 0;
	
}

int add_end()
{
	ST *temp = hptr;
	char *str = NULL;
	ST *new = (ST *)malloc(sizeof(ST));

	if(NULL == malloc(sizeof(char)* BUF)) {
		perror("malloc failed");
		exit(0);
	}

	while(1) {
	printf("enter the roll\n");
	scanf("%d",&new -> roll);
	
		if((new -> roll >= 0) && (new -> roll <= UINT_MAX)) {
			break;
		}
		else {
			printf("wrong input\n");
			continue;
		}
	}
//	str = my_fgets(str);
//	new -> roll = my_atoi(str);

	new -> link = 0;
	if(hptr == 0)
		hptr = new;
	else {
			while(temp -> link != NULL)
				temp = temp -> link;
			temp -> link = new;
		}
	return 0;
}

int add_middle()
{
	ST *new = (ST *)malloc(sizeof(ST));
	ST *temp = hptr;
	ST *prev = hptr;
	char *str = NULL;

	if(NULL == malloc(sizeof(char)* BUF)) {
		perror("malloc failed");
		exit(0);
	}
	printf("\nenter the roll no to add\n");
	scanf("%d",&new->roll);
//	str = my_fgets(str);
//	new -> roll = my_atoi(str);

	while(temp -> link) {
		if((new -> roll == hptr -> roll) || new -> roll < hptr -> roll) {
			new -> link = hptr;
			hptr = new;
		}
		else {
			if(new -> roll <= temp -> roll) {
				new -> link = prev -> link;
				prev -> link = new;
			}
		}
	
		prev = temp;
		temp = temp -> link;
	}	
		return 0;
}
	


void display()
{
	ST *ptr = hptr;
	while(ptr) {
		printf("%d -> ",ptr -> roll);
		ptr = ptr -> link;
	}
}

int my_atoi(char *op)
{
	int c;

    while(*op) {
        c = c * 10 + *op - '0';
        op++;
    }
    return c;
}

char *remove_n(char *str)
{
	int i;

    for(i = 0; i <= BUF; i++) {
        if(*(str + i) == '\n') {
            *(str + i) = '\0';
            break;
        }
    }
    return str;
}
	
char *my_fgets(char *str)
{
	if(NULL == (fgets(str, BUF, stdin))) {
		perror("fgets failed");
		exit(0);
	}
	return str;
}


