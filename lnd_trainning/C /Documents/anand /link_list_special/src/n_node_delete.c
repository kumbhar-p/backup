/**
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5 and n = 2
 * Output : After deleting n th elemnet from last 1 -> 2 -> 4 -> 5
 *
 **/

#include "header.h"

struct node * n_node_delete_last (struct node *head, int n)
{

		struct node *temp = NULL;

		struct node *temp1 = NULL;

		struct node *follow = NULL;

		if (head == NULL) {

				printf ("List is empty \n");

				return head;

		}

		temp = head;

		temp1 = head;

		while (((n != 0) && (temp -> next)) || temp -> next) {

				 if (n == 0  && temp -> next) {

						temp = temp -> next;

						follow = temp1;

						temp1 = temp1 -> next;

				} else {

						temp = temp -> next;

						n--;

				}

		}

		if (n)

				printf ("That many nodes are not there in the list");

		else {
				if (temp1 == head) {

						head = head -> next;

						free (temp1);

						temp1 = NULL;

				} else {

						follow -> next = temp1 -> next;

						free (temp1);

						temp1 = NULL;

				}

		}

		return head;

}
