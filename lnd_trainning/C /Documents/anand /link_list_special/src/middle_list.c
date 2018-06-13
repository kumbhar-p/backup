/**
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5
 * Output : returns address of middle element
 *
 **/

#include "header.h"

struct node * middle_list (struct node *head)
{
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		if (head == NULL) {

				printf ("No elements are there:\n");

				return NULL;

		}

		if (head -> next == NULL) {

				printf ("Only one element is there in the list\n");

				return NULL;

		}

		temp1 = head;

		temp2 = head;

		while (temp1 -> next && temp1 -> next -> next) {

				temp1 = temp1 -> next -> next;

				temp2 = temp2 -> next;

		}

		return temp2;

}
