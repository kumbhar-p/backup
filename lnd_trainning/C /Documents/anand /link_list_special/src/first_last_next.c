/**
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5
 * Output 1 -> 5 -> 2 -> 4 -> 3
 *
 **/

#include "header.h"

struct node *first_last_next (struct node *head)
{
		
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		struct node *follow = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		if ((head -> next ==  NULL )&& (head -> next -> next == NULL)) {

				printf ("The list contains either one node or two nodes\n");

				return head;

		}

		temp1 = head;

		while (temp1 -> next && temp1 -> next -> next ) {

				temp2 = temp1;

				while (temp2 -> next != NULL) {

						follow = temp2;

						temp2 = temp2 -> next;

				}

				follow -> next = NULL;

				temp2 -> next = temp1 -> next;

				temp1 -> next = temp2;

				temp1 = temp2 -> next;

		}

		return  head;

}
