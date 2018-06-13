#include "header.h"

struct node * insert_at_end (struct node *head, struct node *temp1)
{
		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		struct node *temp = NULL;

		temp = head;

		while (temp -> next) {

				temp = temp -> next;

		}

		temp1 -> next = NULL;

		temp -> next = temp1;

		return head;
}
