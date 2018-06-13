/**                                                                             
 *                                                                              
 * Input  :1 -> 2 -> 3 -> 4 -> 5 -> 6                                                 
 * Output : ( 2/3 ) * (no of nodes) = 4th node to be deleted from list
 *          1 -> 2 -> 3 -> 5 -> 6                                                 
 *                                                                              
 **/
#include "header.h"

struct node * two_third_delete (struct node *head)
{
		struct node *temp = NULL;

		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		if (head == NULL){

				printf ("List is empty\n");

				return NULL;

		}

		if ( !(head -> next && head -> next -> next) ) {

				printf ("List contains either one node or two nodes\n");

				return head;

		}

		temp = head ;

		temp1 = head -> next -> next;

		temp2 = temp;

		while (temp1 -> next && temp1 -> next -> next) {

				temp2 = temp;

				temp = temp1 -> next;

				if (temp -> next -> next != NULL)

						temp1 = temp -> next -> next;

		}

		temp = temp2 -> next;

		temp2 -> next = temp2 -> next -> next;

		free (temp);

		temp = NULL;

		
		return head;

}
