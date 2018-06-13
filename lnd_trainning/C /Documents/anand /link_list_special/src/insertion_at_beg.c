#include "header.h"
 
struct node *insertion_at_beg(struct node *head)
{

		struct node *temp = NULL;

		temp = (struct node*)malloc(sizeof(struct node));

		printf("enter the roll no :");

		int_input(&temp->r_no);

		temp->next = NULL;

		if (head == NULL) {

				head = temp;

				count++;

				return head;

		}

		else {

				temp->next = head;

				head = temp;

				count++;

		}

		return head;


}

