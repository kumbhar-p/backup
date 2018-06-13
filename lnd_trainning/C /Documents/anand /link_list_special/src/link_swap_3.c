/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5                                                  
 * Output 2 -> 1 -> 4 -> 3 -> 5                                                 
 *                                                                              
 **/
#include "header.h"

struct node *link_neigh_swap_3 (struct node * head)
{

	struct node *temp1 = NULL; //  for exchanging links
	
	struct node *temp2 = NULL; // for storing next pointer

	struct node *temp = NULL; // for storing temporary location 

	temp1 = head;
	
	if (head == NULL) {

			printf ("list is empty");

			return head;

	}

	temp2 = head -> next;

	if (temp1 -> next -> next == NULL) {


			temp1 -> next = temp2 -> next;

			temp2 -> next = temp1;

			head = temp2;

	}

	while (temp1 && temp1 -> next) {

			if (temp1 == head) {

					temp1 -> next = temp2 -> next;

					temp2 -> next = temp1;

					head = temp2;

			} else {

				temp = temp1 -> next;

				temp -> next = temp2 -> next;

				temp1 -> next = temp2;

				temp2 -> next = temp;

				temp1 = temp2 -> next;


			}

			if (temp1  -> next!= NULL && temp1 -> next -> next!= NULL) {

					temp2 = temp1 -> next -> next;

			}	else

					break;

	}

	return head;

}

