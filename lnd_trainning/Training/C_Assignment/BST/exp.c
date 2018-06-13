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
TREE *hptr = 0;

void in_order()
{
	TREE *ptr = hptr;
    if(ptr) {
        in_order(ptr->left);
        printf ("%d -- ",ptr->roll);
        in_order(ptr->right);
     }
}

void add_tree(int num)
{
    if(hptr == NULL) {
        hptr = (TREE *)malloc(sizeof(TREE));
        (hptr) -> left = hptr -> right = NULL;
        (hptr) -> roll = num;
		return;
    }
    else if(num < hptr -> roll)
         	add_tree(hptr -> left,num);
         else
           	add_tree(hptr -> right,num);
}

int main (void)
{
	char ch;
	int roll;
	do
	{
		printf ("Enter the roll no...\n");
		scanf ("%d",&roll);
		add_tree(roll);
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
