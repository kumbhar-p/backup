/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5  and cnt = 2                                                 
 * Output 1 -> 2 -> 3 -> 0 -> 0                                                 
 *                                                                              
 **/
#include "header.h"

struct node * left_shift_data (struct node *head, int cnt)
{
		struct node *temp1 = NULL;

		if (head == NULL) { 

				printf ("List is not there\n");

				return head;

		}

		while (cnt--) {

				temp1 = head;

				while (temp1 -> next != NULL) {

						temp1 -> r_no = temp1 -> next -> r_no;

						temp1 = temp1 -> next;

				}

				temp1 -> r_no = 0;

		}

		return head;

}
