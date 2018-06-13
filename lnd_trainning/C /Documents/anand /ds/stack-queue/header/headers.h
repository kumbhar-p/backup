struct tag {
    int roll;
    struct tag *link;
    }*head;
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int myatoi(void);
int stack(void);
int push(struct tag **);
int en_queue(struct tag **);
int de_queue(struct tag **);
int pop(struct tag **);
int print(struct tag *);
int print1(struct tag *);
int queue(void);
