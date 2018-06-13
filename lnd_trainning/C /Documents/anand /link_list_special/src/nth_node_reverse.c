#include "header.h"

struct node * nth_node_reverse (struct node *head, int cnt)
{

		struct node *temp1 = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		temp1 = head;

		while (--cnt && temp1 -> next) {

				temp1 = temp1 -> next;

		}

		if (cnt) {

				printf ("That many no of nodes are not there");

		} else
				
				temp1 -> next = reverse_list (temp1 -> next);
		
		return head;
}
