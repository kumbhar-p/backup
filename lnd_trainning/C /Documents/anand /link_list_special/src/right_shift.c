/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5       and n = 2                                           
 * Output 0 -> 0 -> 1 -> 2 -> 3                                                 
 *                                                                              
 **/
#include "header.h"

struct node * right_shift (struct node *head, int cnt)
{
		
		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		temp1 = head;

		temp2 = head;

		int cnt1 = cnt;



		while (cnt1--) {

				temp2 = (struct node *) malloc (sizeof (struct node));

				temp2 -> r_no = 0;

				temp2 -> next = head;

				head = temp2;

		}

		while (cnt--) {

				temp1 = head;
				
				while (temp1 -> next ) {
						
						temp2 = temp1;

						temp1 = temp1 -> next;

				}

				free (temp1);

				temp1 = NULL;

				temp2 -> next = NULL;

		}

		return head;
		
}
