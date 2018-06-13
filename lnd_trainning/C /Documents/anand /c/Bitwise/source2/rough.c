/*#include<stdio.h>
#include<string.h>
int integer(char *);
int main()
{
	int i;
	char a[30];
	printf("enter integer:");
	fgets(a,30,stdin);
	integer(a);
}
int integer(char *p)
{
	int i;
	char *x;
	int count=0;
	x = p;
	for(i=0;x[i];i++){
		if(x[i] == ' '){
			printf("*");
			memmove(x+i,x+i+1,strlen(x+i+1)+1);
			i--;
			}
		}
	for(i=0;x[i];i++){
		printf("+");
		if(x[i] >= '0'&& x[i] <= '9'){
			count++;
			continue;
		}
		else 
			break;
    }
	if(count <= 10){
		
		for(i=0;x[i];i++){
			if(x[0] == '+' || x[0] =='-'){
				if(x[1] <= '2' && x[2] <= '1')
		             printf("valid");
				else
					printf("invalid");
				}
			else{
				if(x[0] >= '0'&& x[0] <= '9'){
					if(x[0] <= '2' && x[1] <= '1')
                     printf("valid");
                else
                    printf("invalid");

				}
}

		}
	
	}
	else 
		printf("inavalid");
}
    



*/


