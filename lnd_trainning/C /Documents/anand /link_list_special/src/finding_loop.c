#include "header.h"

struct node *find_loop (struct node *head, int cnt)
{
		struct node *slow = NULL;

		struct node *fast = NULL;

		int flag = 0;

		if (head == NULL) {

				printf ("List is empty\n");

				return head;
		}

		if (( head -> next == NULL )&&(head -> next -> next == NULL) ) {

				printf ("List contains Either one node or two nodes \n");

				return head;

		}

		slow = head ;

		fast = head -> next;

		while (slow -> next) {

				flag = --cnt ;

				while (fast && flag) {

						if (fast -> next == slow) {

								printf ("Loop exists in the loop\n");

								return head;

						} else 

								fast = fast -> next;

						flag--;

				}

				slow = slow -> next;

				if (slow -> next != NULL)

						fast = slow -> next;
				else
						break;

		}

		if (slow -> next == NULL)

				printf ("Loop doesn't exist in the loop\n");

		return head;

}
