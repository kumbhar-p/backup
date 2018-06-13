/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5  and cnt = 2                                                
 * Output 1 -> 2 -> 3 -> 0 -> 0                                                 
 *                                                                              
 **/
#include "header.h"

struct node * left_shift (struct node *head, int cnt)
{
		
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		temp1 = head;

		temp2 = head;

		int cnt1 = cnt;

		while (cnt--) {

				temp1 = temp1 -> next;

				head = temp1;

				free (temp2);

				temp2 = NULL;

				temp2 = temp1;

		}

		while (temp1 -> next != NULL) {

				temp1 = temp1 -> next;

		}

		while (cnt1--) {

				temp2 = (struct node *) malloc (sizeof (struct node));

				temp2 -> r_no = 0;

				temp2 -> next = NULL;

				temp1 -> next = temp2;

				temp1 = temp1 -> next;

		}

		return head;

		
}
