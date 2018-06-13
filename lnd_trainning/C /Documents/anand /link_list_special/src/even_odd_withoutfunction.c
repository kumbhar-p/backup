#include "header.h"

struct node * even_odd_without_function (struct node * head)
{
		if ((head == NULL) || (head -> next == NULL)) {

				printf ("Either list is empty or list contains only one node\n");

				return head;

		}

		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		struct node *temp3 = NULL;

		struct node *temp4 = NULL;

		int count = 0;

		temp1 = head;

		for (temp3 = head; temp3 != NULL; temp2 = temp3, temp3 = temp3 -> next);

		while (temp1 != temp3) {

				if ((temp1 -> r_no % 2) == 1) {

						if (temp1 == head) {

								head = head -> next;

								temp1 -> next = NULL;

								if (count == 0) {

										temp2 -> next = temp1;

										temp3 = temp1;

										temp2 = temp3;

										count = 1;

								} else {

										temp2 -> next = temp1;

										temp2 = temp1;

								}

								temp1 = head;

						} else { 

								temp4 -> next = temp1 -> next;

								temp1 -> next = NULL;

								if (count == 0) {

										temp2 -> next = temp1;

										temp3 = temp1;

										temp2 = temp1;

										count = 1;

								} else {

										temp2 -> next = temp1;

										temp2 = temp1;

								}

								temp1 = temp4 -> next;

						}

				} else {

						temp4 = temp1;

						temp1 = temp1 -> next;

				}

		}

		return head;
}
