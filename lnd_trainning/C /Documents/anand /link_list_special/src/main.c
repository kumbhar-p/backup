#include "header.h"

int count = 0;

int main(void)
{
		int ch;

		int cnt = 0;

		int n = 0;

		int num1 = 0;

		int num2 = 0;

		struct node *head = NULL;
		
		while (1) {

				printf("***********Single Linked List************");
								
				printf("\n\t1. insertion\n\t2. deleteion\n"
					   "\t3. print the list\n\t4. Left shift\n\t5. right shift\n"
					   "\t6. Left shift by data\n\t7. Right shift by data\n"
					   "\t8. Print Nth node from last\n\t9. Delete nth node from last\n"
					   "\t10. Two third element delete\n\t11. Reverse\n"
					   "\t12. Even odd list print\n\t13. Alternate insert\n"
					   "\t14. Even odd list concatenation\n"
					   "\t15. Link sorting\n\t16. Remove duplicat\n"
					   "\t17. Neighbour link swap with 2\n"
					   "\t18. Neighbour link swap with 3\n"
					   "\t19. Link swap based on data\n"
					   "\t20. Linked list palindrome\n"
					   "\t21. Middle element deletion\n"
					   "\t22. Right rotate\n\t23. Left Rotate\n\t24. Insert loop\n"
					   "\t25. Finding loop\n\t26. Delete loop\n"
					   "\t27. Remove alternate lemenets\n"
					   "\t28. Penultimate deletion\n\t29. Nth node reverse\n"
					   "\t30. Alternate insertion\n\t31. Swap node using two\n"
					   "\t32. Link Sort with four\n\t33. Even odd in single\n"
					   "\t34. Even odd without function\n\t35. Finding and remove loop\n"
					   "\t36. Exit\n");

				printf("Enter your choice:\n");

				int_input(&ch);

				switch (ch) {

						case 1:
								head = insertion_at_beg(head);

								break;
						case 2:
								head = deletion_at_beg(head);

								break;
						case 3:
								print(head);

								break;
						case 4:
								printf ("Enter no of shifts\n");

								int_input(&cnt);

								head = left_shift(head, cnt);
								break;
						case 5:
								printf ("Enter no of shifts\n");

								int_input(&cnt);

								head = right_shift(head, cnt);

								break;
						case 6:
								printf ("Enter no of shifts\n");

								int_input(&cnt);

								head = left_shift_data(head, cnt);

								break;
						case 7:
								printf ("Enter no of shifts\n");

								int_input(&cnt);

								head = right_shift_data(head, cnt);

								break;
						case 8:                                                     
								printf ("Enter node number from last:\n");          

								int_input(&n);                                   

								head = n_node_from_last(head, n);                          

								break;               
						case 9:
								printf ("Enter node number from last:\n");          

								int_input (&n);

								head = n_node_delete_last(head, n);                        

								break;       
						case 10:
								head  = two_third_delete (head);

								break;
						case 11:
								head = reverse_list (head);

								break;
						case 12:
								even_odd_list  (head);

								break;
						case 13:
								head = first_last_next (head);

								break;
						case 14:

								head = even_odd_concat (head);

								break;
						case 15:
								head = link_sort (head, count);

								break;
						case 16:
								head = remove_duplicate(head);

								break;
						case 17:
								head = link_neigh_swap_2 (head);

								break;
						case 18:
								head = link_neigh_swap_3 (head);

								break;
						case 19:
								printf ("Enter number1:\n");                    

								int_input (&num1);                            
								
								printf ("Enter number2:\n");                    

								int_input (&num2);                            

								head = link_swap(head, num1, num2);

								break;

						case 20:
								link_list_palindrome (head);

								break;
						case 21:
								head = middle_list_delete (head);

								break;
						case 22:
								printf ("Enter no of rotations\n");

								int_input (&cnt);

								head = right_rotate_link (head, cnt);

								break;
						case 23:
								printf ("Enter no of rotations\n");

								int_input (&cnt);

								head = left_rotate_link (head, cnt);

								break;
						case 24:
								printf ("enter value where you want to insert loop\n");

								int_input (&cnt);

								head = insert_loop (head, cnt);

								break;
						case 25:
								head = find_loop (head, count);

								break;
						case 26:
								head = remove_loop (head, count);

								break;
						case 27:
								head = remove_alternate (head);

								break;
						case 28:
								penultimate_delete (head);

								break;
						case 29:
								printf ("Enter the node no:\n");

								int_input (&cnt);

								head = nth_node_reverse (head, cnt);

								break;
						case 30:
								alternate_insertion (head);

								break;
						case 31:
								printf ("Enter num1\n");

								int_input (&num1);

								printf ("Enter num2\n");

								int_input (&num2);

								head = swap_nodes_two(head, num1, num2);

								break;
						case 32:
								head = link_sort_4 (head);

								break;
						case 33:
								head = even_odd_single (head);
								
								break;
						case 34:
								head = even_odd_without_function (head);

								break;
						case 35:
								head = find_remove_loop (head);

								break;
						case 36:
								exit(0);
						default:
								printf("wrong choice\n");
								
								break;
				}

		}
		return 0;
}
