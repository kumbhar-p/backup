#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define BUF 512

int hex_to_oct(char *hex, int i)
{
    int j, result = 0;
    double k = 0;
	int rem;
	int res[20];
/*
	if(NULL == (res = (int *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}*/

    for(j = i-1; j >= 0; j--) {

        if(hex[j] >= 'a' && hex[j] <= 'z' )
                hex[j] = hex[j] ^ 32;

            if(hex[j] >= 'A' && hex[j] <= 'Z' )
                result += (hex[j] - 55) * (int)pow((double)16, k);

            else if(hex[j] >= '0' && hex[j] <= '9' )
                result += (hex[j] - 48) * (int)pow((double)16, k);
            else {
                printf("wrong option\n");
                return 0;
            }
        k++;
    }
		i = 0;
    	while(result) {
    		 rem = result % 8;
       		 res[i++] = rem;
        	 result = result / 8;
     	}
		for(j=i-1;j>=0;j--)
            printf("%d",res[j]);
			printf("\n"); 
    return 0;
}


