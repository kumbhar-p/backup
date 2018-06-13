/**
 *
 * Input : 1 -> 2 -> 3 -> 4 -> 5
 * Output: 5 -> 4 -> 3 -> 2 -> 1
 *
 **/
#include "header.h"

struct node * reverse_list (struct node *head)
{
	struct node *present = NULL;
	
	struct node *prev = NULL;
	
	struct node *next = NULL;

	present = head;

	if (head == NULL) {

			printf ("no elements in the list\n");

			return NULL;

	}

	while (present) {

			next = present -> next;

			present -> next = prev;

			prev =  present;

			present = next;

	}

	head = prev;

	return head;
}
