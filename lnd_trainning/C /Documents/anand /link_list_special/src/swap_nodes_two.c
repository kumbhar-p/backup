#include	"header.h"

void swap(struct node* temp_x, struct node* temp_y)

{

		temp_x -> next = (struct node*) ((unsigned)temp_x -> next ^ (unsigned)temp_y -> next);

		temp_y -> next = (struct node*) ((unsigned)temp_x -> next ^ (unsigned)temp_y -> next);

		temp_x -> next = (struct node*) ((unsigned)temp_x -> next ^ (unsigned)temp_y -> next);

}

struct node* swap_nodes_two (struct node* head, int num1, int num2)

{

		if((head == NULL) || (head -> next == NULL)) {

				printf("No struct node or no need\n");

				return head;

		} else {

				struct node* temp1 = head;

				struct node* temp2 = head;

				while((head -> r_no != num1) && temp1 -> next && temp1 -> next -> r_no != num1 ) {

						temp1 = temp1 -> next;

				}

				while((head -> r_no != num2) && temp2 -> next && temp2 -> next -> r_no != num2 ) {

						temp2 = temp2 -> next;

				}

				if(temp1 -> next == NULL || temp2 -> next == NULL)	{

						printf("no struct node to swap\n");

						return head;

				}

				if(head->r_no == num1 ){

						swap(temp1, temp2->next);

						head = temp2 -> next;

						temp2 -> next = temp1;

						return head;

				}
				if(head->r_no == num2 ){

						swap(temp2, temp1 -> next);

						head = temp1 -> next;

						temp1 -> next = temp2;

						return head;

				}


				swap(temp1, temp2);

				temp1  = temp1 -> next;

				temp2 = temp2 -> next;

				swap(temp1, temp2);

				return head;

		}
}		


