/**
 *
 * Input  : 1 -> 2 -> 3 -> 4 -> 5 -> 6
 * Output : 1 -> 3 -> 5 -> 5 -> 3 -> 1
 *
 **/

#include "header.h"

void alternate_insertion (struct node *head)
{
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		struct node *temp3 = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return ;

		}

		if (head -> next -> next == NULL) {

				head -> next -> r_no = head -> r_no;

				return ;

		}

		temp1 = head;

		temp2 = head;

		while ((temp1 = temp1 -> next) != NULL) {

				if ((temp1 = temp1 -> next) != NULL) {

						head = head -> next;

						head -> r_no = temp1 -> r_no;

				} else

						break;

		}

		print (temp2);

		printf ("%d\n", head -> r_no);

		head = head  -> next;

		temp3 = head;

		temp1 = temp2;

		while (temp3  != NULL) {

						while (temp2 -> next != head ) {

								temp2 = temp2 -> next;

						}

						temp3 -> r_no = temp2 -> r_no;

						head = temp2;

						temp2 = temp1;

						temp3 = temp3 -> next;

		}

		return ;

}
