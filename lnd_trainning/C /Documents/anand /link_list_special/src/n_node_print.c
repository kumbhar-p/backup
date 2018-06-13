/**
 *
 * Input : 1 -> 2 -> 3 -> 4 -> 5 and n = 2
 * Output : Printing nth element from last -> 3
 *
 **/
#include "header.h"

struct node * n_node_from_last (struct node *head, int n)
{

		struct node *temp = NULL;

		struct node *temp1 = NULL;

		if (head == NULL) {

				printf ("List is empty \n");

				return head;

		}

		temp = head;

		temp1 = head;

		while (((n != 0) && (temp -> next)) || temp -> next) {

				 if (n == 0  && temp -> next) {

						temp = temp -> next;

						temp1 = temp1 -> next;

				} else {

						temp = temp -> next;

						n--;

				}

		}

		if (n)

				printf ("That many nodes are not there in the list");

		else

				printf ("The n th node from the last is : %d\n", temp1 -> r_no);

		return head;

}
