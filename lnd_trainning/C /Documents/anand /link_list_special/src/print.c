#include "header.h"

void print(struct node *head)
{
	struct node *temp;
	temp = head;
	if (head == NULL) {

			printf ("List is empty : \n");

			return;

	} 
	printf ("-------------------------------------------------\n");
	printf ("|      name             |        roll no \t|\n");
	printf ("-------------------------------------------------\n");
	while (temp) {
		
			printf("\t%5d\t\t|\n", temp->r_no);
		
			temp = temp->next;
	}
	printf ("-------------------------------------------------\n");
}
