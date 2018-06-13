/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5       and cnt = 2                                           
 * Output 4 ->  5 -> 1 -> 2 -> 3                                                 
 *                                                                              
 **/
#include "header.h"

struct node * right_rotate_link (struct node *head, int cnt)
{
		struct node *temp1 = NULL;

		if (head == NULL) { 

				printf ("List is not there\n");

				return head;

		}

		if (head -> next == NULL) {

				printf ("List contains only one node \n");

				return head;

		}

		while (cnt--) {

				temp1 = head;

				while (temp1 -> next -> next!= NULL) {

						temp1 = temp1 -> next;

				}

				temp1 ->  next -> next = head;

				head = temp1 -> next ;
				
				temp1 -> next = NULL;

		}

		return head;
}
