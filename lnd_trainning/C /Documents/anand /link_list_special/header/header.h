#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

struct node 
{
	int r_no;
	struct node *next;
};

void print(struct node *);
void int_input(int*);
extern int count;
struct node* insertion_at_beg(struct node *);
int main(void);
struct node * deletion_at_beg(struct node *);
struct node *left_shift(struct node *, int);
struct node *right_shift(struct node *, int);
struct node *left_shift_data(struct node *, int);
struct node *right_shift_data(struct node *, int);
struct node *first_last_next(struct node *);
struct node *n_node_from_last (struct node *, int );
struct node *n_node_delete_last (struct node *, int );
struct node * two_third_delete (struct node *);
struct node * reverse_list (struct node *);
void even_odd_list (struct node *);
struct node * even_odd_concat (struct node *);
struct node *link_sort (struct node *, int );
struct node* remove_duplicate(struct node* );
struct node *link_neigh_swap_2 (struct node * );
struct node *link_neigh_swap_3 (struct node * );
struct node * link_swap(struct node *, int , int );
void link_list_palindrome (struct node *);
struct node * middle_list (struct node *);
struct node * middle_list_delete (struct node *);
struct node * right_rotate_link (struct node *, int);
struct node * left_rotate_link (struct node *, int);
struct node * insert_loop (struct node *, int);
struct node * find_loop (struct node *, int);
struct node * remove_loop (struct node *, int);
struct node * remove_alternate (struct node *);
struct node * nth_node_reverse (struct node *, int);
void penultimate_delete (struct node *);
void alternate_insertion (struct node *);
struct node* swap_nodes_two(struct node* , int , int );
struct node* link_sort_4(struct node*);
struct node* even_odd_single(struct node*);
struct node* even_odd_without_function(struct node*);
struct node *insert_at_end (struct node *, struct node *);
