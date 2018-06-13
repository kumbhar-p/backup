#include "header.h"

struct node * insert_loop (struct node *head, int cnt)
{

		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;

		}

		temp1 = head;

		temp2 = head;

		while (temp1 -> next != NULL) 

				temp1 = temp1 -> next;

		while (cnt-- && head -> next) 

				head = head -> next;

		temp1 -> next = head;

		return temp2;

}
