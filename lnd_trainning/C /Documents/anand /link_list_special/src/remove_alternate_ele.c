#include "header.h"

struct node * remove_alternate (struct node *head)
{
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		if (( head == NULL ) && ( head -> next == NULL ) ) {

				printf ("List is empty Or list contains only one node\n");

				return head;

		}

		temp1 = head;

		while ( temp1 && temp1 -> next) {

				temp2 = temp1 -> next;

				temp1 -> next = temp2 -> next;

				free (temp2);

				temp2 = NULL;

				temp1 = temp1 -> next;

		}

		return head;
}
