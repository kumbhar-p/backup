#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tree
{
	struct tree *left;
    int roll;
    struct tree *right;
}TREE;

TREE *parent;

void pre_order(TREE *ptr)
{
	if(ptr)
	{
		printf ("%d -- ",ptr->roll);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

void post_order(TREE *ptr)
{
	if(ptr) {
	    post_order(ptr->left);
        post_order(ptr->right);
        printf ("%d -- ",ptr->roll);
    }
}

void in_order(TREE *ptr)
{
    if(ptr) {
        in_order(ptr->left);
        printf ("%d -- ",ptr->roll);
        in_order(ptr->right);
     }
}

void add_tree(TREE **ptr,int num)
{
    if(*ptr == NULL) {
        *ptr = (TREE *)malloc(sizeof(TREE));
        (*ptr) -> left = (*ptr) -> right = NULL;
        (*ptr) -> roll = num;
		return;
    }
    else if(num < (*ptr)->roll)
         	add_tree(&(*ptr)->left,num);
         else
           	add_tree(&(*ptr)->right,num);
}

int main (void)
{
	TREE *hptr = 0;
	char ch;
	int roll;
	do
	{
		printf ("Enter the roll no...\n");
		scanf ("%d",&roll);
		add_tree(&hptr,roll);
		printf ("Would you like to and another node...\n");
		scanf (" %c",&ch);
	}while (ch == 'y' || ch == 'Y');

	if(hptr)
	{
		printf ("Post Order...\n");
		post_order(hptr);

	/*	printf ("\nPre Order...\n");
		pre_order(hptr);

		printf ("\nIn Order...\n");
		in_order(hptr);  */
		printf ("\n");
	}

	else
		printf ("No data of the link...\n");
	

	return 0;
}
