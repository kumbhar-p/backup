#include "header.h"

struct node *remove_loop (struct node *head, int cnt)
{

		struct node *temp1 = head;

		struct node *temp2 = head;

		int flag = 0;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		if ((head -> next == NULL ) && (head -> next -> next == NULL)) {

				printf ("List contains either one node or two nodes\n");

				return head;

		}

		temp1 = head;

		temp2 = head -> next;

		while (temp1 -> next) {

				flag = --cnt  ;

				while (temp2 && (flag != 0)) {

						if (temp1 == temp2 -> next) {

								temp2 -> next = NULL;

								return head;

						}

						temp2 = temp2 -> next;

						flag--;

				}

				temp1 = temp1 -> next;

				temp2 = temp1 -> next;

		}

		if (temp1 -> next == NULL)

				printf ("Loop is not there\n");


		return head;

}
