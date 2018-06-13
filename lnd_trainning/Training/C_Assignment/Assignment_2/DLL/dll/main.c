#include"header.h"

ST *hptr = 0; 
int count;

int main(void)
{
	char ch;	
	int op;
	int pos;
	int num;
	int num1;
	
	do
	{
	add_begin();
	printf("Do u want to add more data(y/n)?\n");
	scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');

	display();
	printf("enter ur op\n 1. Add at pos\n 2. Add bef pos\n 3. Add aft pos\n 4. Add bef num\n 5. Add aft num\n 6. Add middle\n");
	scanf(" %d",&op);
	
	switch(op) {
	    case 1 :
		   printf("enter pos & roll\n");
		   scanf("%d %d",&pos,&num);			
	           if(add_at_pos(pos, num))
			display();
		   else
		       return 0;
	           break;
	    case 2 :
		   printf("enter pos & roll\n");
		   scanf("%d %d",&pos,&num);			
	           if(add_bef_pos(pos, num))
			display();
		   else
		       return 0;
	           break;
	    case 3 :
		   printf("enter pos & roll\n");
		   scanf("%d %d",&pos,&num);			
	           if(add_aft_pos(pos, num))
			display();
		   else
		       return 0;
	           break;
	    case 4 :
		   printf("enter num & roll\n");
		   scanf("%d %d",&num,&num1);			
	           if(add_bef_num(num, num1))
			display();
		   else
		       return 0;
	           break;
	    case 5 :
		   printf("enter num & roll\n");
		   scanf("%d %d",&num,&num1);			
	           if(add_aft_num(num, num1))
			display();
		   else
		       return 0;
	           break;
	    case 6 :
		   printf("enter num\n");
		   scanf("%d",&num);			
	           if(add_middle(num))
			display();
		   else
		       return 0;
	           break;
		
	}
}
