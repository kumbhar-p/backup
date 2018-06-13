/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5    and cnt = 2                                              
 * Output 3 -> 4 -> 5 -> 1 -> 2                                                 
 *                                                                              
 **/
#include "header.h"

struct node * left_rotate_link (struct node *head, int cnt)
{
		struct node *temp1 = NULL;

		if (head == NULL) { 

				printf ("List is not there\n");

				return head;

		}

		while (cnt--) {

				temp1 = head;

				while (temp1 -> next != NULL) {

						temp1 = temp1 -> next ;
				
				}

				 temp1 -> next = head;

				 head = head -> next;

				 temp1 -> next -> next = NULL;

		}

		return head;

}
