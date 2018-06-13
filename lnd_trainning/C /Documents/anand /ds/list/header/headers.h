 struct tag{
	int roll;
	struct tag *link;
}*head;
struct tag1{
	int roll;
	struct tag1 *next;
	struct tag1 *prev;
	}*head1;
#include<stdio.h>
#include<stdlib.h>
int myatoi(void);
int cir_dub_end(void);
int cir_dub_delete(void);
int cir_dub_mid(void);
int cir_dub_big(void);
int add_big(struct tag **);
int add_end(struct tag **);
int input_inser_big(void);
int input_inser_end(void);
int print(struct tag *);
int print1(struct tag1 *);
int inser_mid(void);
int delete_node(void);
int input_dub_inser_big(void);
int input_dub_inser_end(void);
int dub_add_big(struct tag1 **);
int dub_add_end(struct tag1 **);
int dub_mid(void);
int dub_delete(void);
int cir_delete(void);
int cir_inser_big(void);
int cir_mid(void);
int cir_inser_end(void);
int cir_add_big(struct tag **);
int cir_add_end(struct tag **);
int cir_dub_add_end(struct tag1 **);
int cir_dub_add_big(struct tag1 **);
