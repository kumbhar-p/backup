#include "header.h"

void penultimate_delete (struct node *head)
{
		
		struct node *temp1 = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return;

		}

		if (head -> next -> next == NULL) {

				temp1 = head;

				head = head -> next;

				free (temp1);

				temp1 = NULL;

		}

		while (head -> next -> next -> next!= NULL) {

				head = head -> next;

		}

		temp1 = head -> next;

		head -> next = head -> next -> next;

		free (temp1);

		temp1 = NULL;

		return ;
}
