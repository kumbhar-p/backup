/**                                                                             
 *                                                                              
 * Input 1 -> 5 -> 4 -> 2 -> 3                                                  
 * Output 1 -> 2 -> 3 -> 4 -> 5                                                 
 *                                                                              
 **/
#include "header.h"

struct node *link_sort (struct node * head, int count)
{

	struct node *temp = NULL; // for traversing in the list and  exchanging

	struct node *temp1 = NULL; //  for exchanging links
	
	struct node *temp3 = NULL; // for storing previous pointer

	temp = head;
	
	if (head == NULL) {

			printf ("list is empty");

			return head;

	}

	int cnt ;

	temp3 = head;
	
	if (count ) {

			cnt = count;

			while ( temp && temp -> next != NULL && cnt) { 

					if ((temp -> r_no > temp -> next -> r_no) && (head == temp) ) {

							temp1 = temp -> next;

							temp -> next  =  temp -> next -> next;

							temp1 -> next = temp ;
							
							head = temp1 ;

							temp3 = head ;

					} else if ((temp -> next != NULL) && temp -> r_no > temp -> next -> r_no && (head != temp)) {
							
							temp1 = temp -> next;

							temp -> next = temp -> next -> next;

							temp1 -> next = temp;

							temp3 -> next = temp1;

							temp3 = temp1 ;
							
					} else if ( temp3 && (temp3 -> next != NULL)){

							temp3 = temp;

							temp = temp -> next;

					}

					cnt -- ;

			}

			head = link_sort (head, count - 1);

	}

	return head;

}










