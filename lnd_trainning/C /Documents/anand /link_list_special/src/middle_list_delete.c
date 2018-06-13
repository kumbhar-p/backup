/**
 *
 * Input : 1 -> 2 -> 3 -> 4 -> 5
 * Output: After removing middle element 1 -> 2 -> 4 -> 5 
 *
 **/

#include "header.h"

struct node* middle_list_delete (struct node *head)
{

		struct node *slow = NULL;

		struct node *fast = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		if (head -> next == NULL) {

				printf ("List contains only one node\n");

				return head;

		}

		if (head -> next -> next == NULL) {

				slow = head;

				head = head -> next;

				free (slow);

				slow = NULL;

				return head;

		}

		slow = head;

		fast = head -> next -> next;

		while (fast && fast -> next ) {

				fast = fast -> next -> next;

				slow = slow -> next;

		}

		fast = slow -> next;

		slow -> next = slow -> next -> next;

		free (fast);

		fast = NULL;

		return head;

}

