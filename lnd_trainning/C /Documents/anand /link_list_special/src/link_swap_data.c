/**
 * link swap based on data
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5 and num1 = 2 , num2 = 5
 * Output 1 -> 5 -> 3 -> 4 -> 2
 *
 **/
#include "header.h"

struct node * link_swap(struct node *head, int num1, int num2) 
{
		if (num1 == num2) {

				printf ("Both numbers are same:\n");

				return head;

		}

		struct node *cur1 = head;

		struct node *cur2 = head;

		struct node *prev1 = NULL;

		struct node *prev2 = NULL;

		if (head == NULL) {

				printf ("There are no elments in the list\n");

				return head;

		}

		while (cur1 && cur1 -> r_no != num1) {

				prev1 = cur1;

				cur1 = cur1 -> next;

		}

		while (cur2 && cur2 -> r_no != num2) {

				prev2 = cur2;

				cur2 = cur2 -> next;

		}

		if (cur1 == NULL && cur2 == NULL) {
				
				printf ("Either num1 or num2 is not there\n");

				return head;

		}


		if (prev1 != NULL) 

				prev1 -> next = cur2;
	
		else

				head = cur2;

		if (prev2 != NULL)

				prev2 -> next = cur1;

		else

				head = cur1;

		struct node *temp = NULL;

		temp = cur1 -> next;

		cur1 -> next = cur2 -> next;

		cur2 -> next = temp;

		return head;

}
