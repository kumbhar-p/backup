#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int data;
	struct st *llink;
	struct st *rlink;
}ST;


ST *insert(ST *, int );
void inorder(ST *);
ST *new_node(int item);

int main(void)
{
	char ch;
	int key;

	ST *node = NULL;

//	printf("enter the ele\n");
//	scanf("%d",&key);
	node = insert(node, 10);
		insert(node, 20);
		insert(node, 30);
		insert(node, 70);
		insert(node, 40);
		insert(node, 10);
		insert(node, 50);
/*	while(ch == 'y' || ch == 'Y')
	{
		printf("enter the ele\n");
		scanf("%d",&key);
		insert(node, key);
		printf("want to insert y/n\n");
		scanf(" %c",&ch);
	}*/
    inorder(node);
	return 0;
}

ST *insert(ST *node, int key)
{
	ST *temp = (ST *)malloc(sizeof(ST));

	if(node == NULL)
		return new_node(node);
	
	else if(key < (node -> data)) 
			node -> llink = insert(node -> llink, key);
		 else 
			node -> rlink = insert(node -> llink, key);
	
	return node;
}

void inorder(ST *node)
{
	if(node != NULL) {
		inorder(node -> llink);
		printf("%d -> ",node -> data);
		inorder(node -> rlink);
	}
}
ST *new_node(int item)
{
    ST *temp =  (ST *)malloc(sizeof(ST));
    temp -> data = item;
    temp -> llink = temp->rlink = NULL;
    return temp;
}		
