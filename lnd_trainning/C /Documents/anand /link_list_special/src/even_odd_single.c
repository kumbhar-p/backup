#include "header.h"

struct node * even_odd_single (struct node *head)
{
		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		if (head -> next == NULL) {

				printf ("List contains only one node \n");

				return head;

		}

		struct node *temp = NULL;

		struct node *temp1 = NULL;

		int count = 0;

		struct node *temp2 = NULL;
		
		temp = head;

		while (temp != temp2) {

				if  ((temp -> r_no) % 2 == 1) {

						if (count == 0) {

								temp2 = temp;

								count = 1;

						}

						if (temp == head) {

								head = head -> next;

								head = insert_at_end (head, temp);

								temp = head;

						} else {

								temp1 -> next = temp -> next;

								head = insert_at_end (head, temp);

								temp = temp1 -> next;

						}

				} else {

						temp1 = temp;

						temp = temp -> next;

				}

		}

		return head;


}
