/**                                                                             
 *                                                                              
 * Input 1 -> 2 -> 3 -> 2 -> 3 -> 3 -> 4 -> 5 -> 6                                                  
 * Output 1 -> 2 -> 3 -> 4 -> 5 -> 6                                                 
 *                                                                              
 **/
#include	"header.h"

struct node* remove_duplicate(struct node* head)

{

	if((head == NULL) || (head->next ==NULL))
	
		puts("no duplicate struct node");

	else{

		struct node *temp = head;
		
		struct node *temp1 = NULL;
		
		struct node *temp2 = NULL;

		while(temp){

			temp2 = temp;

			temp1 = temp->next;

			while(temp1){

				if(temp -> r_no != temp1->r_no){

					temp2 = temp1;

					temp1 = temp2->next;

				}else{

					temp2 ->next = temp1->next;

					free(temp1);

					temp1 = temp2 -> next;

				}
			
			}
			
			temp = temp ->next;

		}
	
	}	

	return head;

}
				
					

		
