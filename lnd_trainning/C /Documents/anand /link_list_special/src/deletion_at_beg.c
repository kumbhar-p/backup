#include "header.h"

struct node * deletion_at_beg(struct node *head)
{

		if (head == NULL) {

				printf ("list is empty : \n");

				return head;

		}
		struct node *temp;
		
		temp = head;
		
		head = head->next;
		
		free(temp);

		temp = NULL;

		count--;
		
		return head;
}
	
