/**                                                                             
 * Neighbour links swap
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5                                                  
 * Output 2 -> 1 -> 4 -> 3 -> 5                                                 
 *                                                                              
 **/
#include "header.h"

struct node *link_neigh_swap_2(struct node * head)
{

	struct node *temp1 = NULL; //  for exchanging links
	
	struct node *temp2 = NULL; // for storing next pointer

	temp1 = head;
	
	if (head == NULL) {

			printf ("list is empty");

			return head;

	}

	temp2 = head -> next;

	while (temp1 && temp1 -> next) {

			if (temp1 == head) {

					temp1 -> next = temp2 -> next;

					temp2 -> next = temp1;

					head = temp2;

			} else {

					temp1 -> next -> next = temp2 -> next;

					temp2 -> next = temp1 -> next;

					temp1 -> next = temp2;

					temp1 = temp2 -> next;		

			}

			if (temp1  -> next!= NULL && temp1 -> next -> next!= NULL) {

					temp2 = temp1 -> next -> next;

			}	else

					break;

	}

	return head;

}










