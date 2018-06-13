/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 4 -> 5       and  cnt = 2                                          
 * Output 0 -> 0 -> 1 -> 2 -> 3                                                 
 *                                                                              
 **/
#include "header.h"

struct node * right_shift_data (struct node *head, int cnt)
{
		struct node *temp1 = NULL;

		int data = 0;

		int data2 = 0;

		if (head == NULL) { 

				printf ("List is not there\n");

				return head;

		}

		while (cnt--) {

				temp1 = head;

				data = temp1 -> r_no;

				while (temp1 -> next != NULL) {

						temp1 = temp1 -> next;

						data2 = temp1 -> r_no;

						temp1 -> r_no = data;

						data = data2;

				}

				temp1 -> r_no = data;

				head -> r_no = 0;

		}

		return head;
}
