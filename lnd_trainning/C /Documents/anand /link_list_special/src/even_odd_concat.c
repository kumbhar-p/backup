/**
 *
 * Input 1 -> 2 -> 3 -> 4 -> 5
 * Output 1 ->3 -> 5 -> 2 -> 4
 *
 **/

#include "header.h"


struct node * even_odd_concat (struct node *head)
{
	
	struct node *even = NULL;
	
	struct node *odd = NULL;

	struct node * temp = NULL;

	struct node * temp1 = NULL;

	temp = head;

	if (temp == NULL || temp -> next == NULL) {
			
			printf ("Either List is empty or list contains only one node: \n");

			return head;

	}

	temp1 = head -> next;

	while (temp ) {

			if (temp -> r_no %2 == 0) {

					if (even == NULL) {

							even = temp;


							even -> next = NULL;

					} else {

							temp -> next = even;

							even = temp;


					}

			} else {

					if (odd == NULL) {

							odd = temp;


							odd -> next = NULL;

					} else {

							temp -> next = odd;

							odd = temp;


					}

			}
							
			temp = temp1;

			if (temp1 == NULL)

					break;
			else

					temp1 = temp1 -> next;
	}

	printf ("The even list is : \n");

	print (even);

	printf ("The odd list is : \n");

	print (odd);

	head = odd;

	while (odd -> next != NULL)

			odd = odd -> next;

	odd -> next = even;

	print (head);

	return head;

}
