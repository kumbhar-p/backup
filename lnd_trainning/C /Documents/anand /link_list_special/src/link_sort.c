#include "header.h"

struct node *link_sort_4 (struct node *head)
{

		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		struct node *temp3 = NULL;

		struct node *temp4 = NULL;

		if (head == NULL || head -> next == NULL) {

				printf ("Either list is empty or list contains only one node\n");

				return head;

		}

		temp1 = head;

		for (; temp1 -> next; temp3 = temp1, temp1 = temp1 -> next) {

				for (temp2 = temp1; temp2 -> next != NULL; temp2 = temp2 -> next) {

						if (temp1 -> r_no > temp2 -> next -> r_no) {

								if (temp1 == head) {

										head = temp2 -> next;
										
										swap (temp2 -> next, temp1);	

										if (temp1 != temp2) 

												temp2 -> next = temp1;

										temp2 = temp1;

										temp1 = head;

								} else {

										swap (temp1, temp2 -> next);

										swap (temp3, temp1);

										temp2 = temp1;

										temp1 = temp3 -> next;

								}

						}
				}

		}
						
										
		return head;
}
