#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};

struct Node *hptr;
struct Node *temp;
void display();
void add_end(int num);
int main()
{
    int ele;
    char ch;
    do {
        printf( "enter the ele " );
        scanf("%d",&ele);
        add_end(ele);
        printf("do u want to add more ");
        scanf("%c",&ch);
    }while( ch == 'Y' || ch == 'y');
    display();
    
}

void add_end(int num)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node *));
    new->data = num;
    new->next = NULL;
    if(hptr == NULL) {
        hptr = new;
    }
    else {
        temp->next = new;
        }
    temp = new;
}

void display()
{
    struct Node *tmp = hptr;
    while(tmp) {
        printf("%d -> ", temp->data);
        tmp = tmp->next;
    }
}



