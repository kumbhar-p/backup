#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
int myatoi(void )
{
	char arr[20];
	char number[20];
	int i = 0;
	int sum = 0;
	int count = 0;
	int b;
	fgets(number,20,stdin);
//	strcpy(arr,p);
	strcpy(arr,number);
	if(arr[0] != ' '){
		for(i = 0 ; arr[i] ; i++) {     //   12 space     12
			if( arr[i] >='0' && arr[i] <= '9')
				continue;
			if( arr[i] == ' ')
				for( ; arr[i] ; i++ )
			        if( arr[i] >='0' && arr[i] <='9'){
            		//	printf("invalid integer1 :\n");
				//	return(-2);
				 b = myatoi();
						return b;
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
					printf("invalid integer2 :\n");
				//	return(-2);
					b=myatoi();
					return b;
				}	


			}

		}			
	   if(( arr[0] != '+') && (arr[0])!='-'){	// *12 like	 that		
       			for(i=0;arr[i];i++){
					if((( arr[i] >='0') && (arr[i] <= '9') ) || (arr[i] == ' ') || (arr[i] == '.') || arr[i] == '\n')
						continue;
					else{
							printf("invalid integer3 :\n");
				//				return(-2);
						b= myatoi();
							return b;
					}
				}
		 }
	  //++12 condition 
	   if(((arr[0] == '+') && (arr[1]) =='-')||((arr[0] == '-') && (arr[1] == '+')) ||  
                ((arr[0] == '+') && (arr[1] =='+'))||((arr[0] == '-') && (arr[1]) == '-')){
					printf("invalid integer 4:\n");				
                  //  return(-2);
				b =	myatoi();	
					return b;
				}
		for(i=0;arr[i];i++){
				if(arr[i] >= '0' || arr[i] <= '9' || arr[i] == ' ')
					continue;
				 else{
						printf("invalid integer5 :\n");
				//		return(-2);
					b =	myatoi();
						return b;
					}
				}



//*****************************valid conditions*******************************

	
	 if( arr[0] == '.' || arr[0] == '0' ) {  //   .675765 condition
         printf("valid integer :%d\n",0);
          return(0);
        	}
 	for( i = 0 ; arr[i] ; i++) { // 12 space     space
		if( arr[i] == ' ')
		    memmove(arr+i, arr+i+1, strlen(arr+i+1)+1);
				if((( arr[i]>='0') ) && ( arr[i] <= '9'))
			   		sum = sum *10 + arr[i]-48;
				if(arr[i] == '.')
		   			break;
		
	}
	if (arr[0] == '-'){
	return(-sum);

	}
	else{
	return(sum);
	}
		


}	




