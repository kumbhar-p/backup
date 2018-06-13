/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 2 -> 1      
 *
 * Output : Either list is palindrome or not                                                 
 *                                                                              
 **/
#include "header.h"

void link_list_palindrome (struct node *head)
{

		struct node *temp1 = NULL;

		struct node *temp2 = NULL;

		temp1 = middle_list (head);

		temp2 = temp1;

		temp1 = reverse_list (temp1);

		while (head != temp2) {

				if (head -> r_no == temp1 -> r_no) {

						head = head -> next;

						temp1 = temp1 -> next;

				} else

						break;

		}

		if (head == temp2)

				printf ("List is palindrome\n");

		else

				printf ("List is not palindrome\n");

		return ;


}
