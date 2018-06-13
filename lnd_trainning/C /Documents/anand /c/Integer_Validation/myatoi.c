#include<stdio.h>
#include<string.h>
int myatoi(char *);
int main( void )
{
	char  num[50];
	printf("enter the number:");
	gets(num);
	myatoi(num);
}
int myatoi(char *p)
{
	char *q = p;
	int a;
	char arr[50];
	int i = 0;
	int sum = 0;
	int count = 0;
	strcpy(arr,p);
	for(i = 0 ; arr[i] ; i++)
		printf("%c",arr[i]);
	putchar('\n');
	if(arr[0] != ' '){
	
			for(i = 0 ; arr[i] ; i++) {     //   12 space     12
					if( arr[i] >='0' && arr[i] <= '9')
					  		continue;
					if( arr[i] == ' ')
							for( ; arr[i] ; i++ )
			                 if( arr[i] >='0' && arr[i] <='9'){
            				 printf("\ninvalid integer1 :\n");
						return;
									}
		
							}
				}
	 for(i =0 ; arr[i] ; i++) {     // 12.34.45
		 if( (arr[i] >= '0') && arr[i] <= '9')
				continue;
		 if(arr[i] == '.')
				count++;
		 for( ; arr[i] ; i++ ){
		 		if( (arr[i] >= '0') && arr[i] <= '9')
					continue;
		 		if(arr[i] == '.')
						count++;
		 		if(count >2 ){
					printf("\ninvalid integer2 :\n");
						return;
							}	


					}

			 }			
	   if(( arr[0] != '+') && (arr[0])!='-'){	// *12 like	 that		
       			for(i=0;arr[i];i++){
					if((( arr[i] >='0') && (arr[i] <= '9')) || (arr[i] == ' ') || (arr[i] == '.'))
						continue;
					else{
							printf("\ninvalid integer3 :\n");
								return;
					}
				}
		 }
	  //++12 condition 
	   if(((arr[0] == '+') && (arr[1]) =='-')||((arr[0] == '-') && (arr[1] == '+')) ||  
                ((arr[0] == '+') && (arr[1] =='+'))||((arr[0] == '-') && (arr[1]) == '-')){
					printf("invalid integer 4:\n");				
                    return;		
				}
		for(i=0;arr[i];i++){
				if(arr[i] >= '0' || arr[i] <= '9' || arr[i] == ' ')
					continue;
				 else{
						printf("invalid integer5 :\n");
						return;
					}
				}



//*****************************valid conditions*******************************

	
	 if( arr[0] == '.' ) {  //   .675765 condition
         printf("\nvalid integer :%d\n",0);
          return;
        	}
 	 for( i = 0 ; arr[i] ; i++) { // 12 space     space
		if( arr[i] == ' ')
		      memmove(arr+i,arr+i+1,strlen(arr+i+1)+1);
		if(((arr[i]>='0') ) && (arr[i] <= '9'))
			   sum = sum *10 + arr[i]-48;
		
		if(arr[i] == '.')
		 break;
		
	}
	if (arr[0] == '-'){
	printf("valid integer :");
	printf("%d\n",-sum);
	}
	else{
	printf("valid integer :");
	printf("%d\n",sum);
	}
		


}	




