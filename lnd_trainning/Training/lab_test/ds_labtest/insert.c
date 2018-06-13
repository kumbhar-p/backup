#include<stdio.h>
#include<stdlib.h>

typedef struct st 
{
	int data;
	struct st *llink;
	struct st *rlink;
}ST;

int add_node();
void display();
int delete_at_pos(int pos);
int delete_middle();
 
ST *hptr = 0;
int count = 0;

int main(void)
{
	char ch;
	int pos;

	do {
		add_node();
		printf("do u want to add\n");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');

	display();
//	printf("enter the pos to delete\n");
//	scanf("%d",&pos);
//	delete_at_pos(pos);
//	display();
 	delete_middle();
	printf("after\n");
	display();
	
return 0;
}

int add_node() 
{
	ST *new = (ST *)malloc(sizeof(ST));
	ST *temp = hptr;

	printf("enter the data");
	scanf("%d",&new -> data);
	if(hptr == NULL) {
		new -> rlink = NULL;
		new -> llink = NULL;
		hptr = new;
	}
	else {
		while(temp -> rlink != NULL)
			temp = temp -> rlink;
	
			new -> rlink = NULL;
			temp -> rlink = new; 
			new -> llink = temp;
	}

	new = temp;
	return 0;
}

void display()
{
	ST *ptr = hptr;
	
	while(ptr) {
		count++;
		printf("%d -> ",ptr -> data);
		ptr = ptr -> rlink;
	}
}

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

int delete_middle()
{
    ST *temp = hptr;
    int p = 0;

    if(count == 1)
        return 0;
    p = (count / 2) + 1;
    delete_at_pos(p);
    return 1;
}
/*
void delete_middle()
{
	ST *temp = hptr;
	ST *node;
	
	count = (count/2) + 1;
	if(count == 1 || count == 2)
		return ;
	else {
		count = count - 2;
		while(count) {
			temp = temp -> rlink;
			count --;
		}
	node = temp -> rlink;    
	temp -> rlink = temp -> rlink -> rlink;
	temp -> rlink -> rlink = temp;
	free(node);
	node = NULL;
	}
}*/
