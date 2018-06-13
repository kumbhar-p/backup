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
	printf("enter ur op\n 1. Delete at pos\n 2. Delete bef pos\n 3. Delete aft pos\n 4. Delete bef num\n 5. Delete aft num\n 6. Delete at middle\n");
	scanf(" %d",&op);
	
	switch(op) {
	    case 1 :
		   printf("enter pos\n");
		   scanf("%d",&pos);			
	           if(delete_at_pos(pos))
			display();
		   else
		       return 0;
	           break;
	    case 2 :
		   printf("enter pos\n");
		   scanf("%d",&pos);			
	           if(delete_bef_pos(pos))
			display();
		   else
		       return 0;
	           break;
	    case 3 :
		   printf("enter pos\n");
		   scanf("%d",&pos);			
	           if(delete_aft_pos(pos))
			display();
		   else
		       return 0;
	           break;
	    case 4 :
		   printf("enter num\n");
		   scanf("%d",&num);			
	           if(delete_bef_num(num))
			display();
		   else
		       return 0;
	           break;
	    case 5 :
		   printf("enter num\n");
		   scanf("%d",&num);			
	           if(delete_aft_num(num))
			display();
		   else {
		       printf("node is not present \n");
		       return 0;
                   }
	           break;
	    case 6 :
	           if(delete_middle())
			display();
		   else {
		       printf("node is not present \n");
		       return 0;
		   }
	           break;
		
	}
}
