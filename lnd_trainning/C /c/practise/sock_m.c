#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int temp,k = 0;
    int i,j,count = 0,res = 0;
    int s = 0,c_i;
    
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    int *p = malloc(sizeof(int) * n);
    for(c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(i = 0; i < n; i++) {
        temp = c[i];
		s = 0;
        for(j = k; j >= 0; j--) {
           if(p[j] == temp)
               s++;
        }
		printf("s - %d ",s);
        if(s == 0) {     
            for(j = 0; j < n; j++) 
                if(temp == c[j])
                    count++;
				printf("cnt - %d\n",count);
                if(count % 2 != 0)
                    res++;
                count = 0;
                p[k] = temp; 
				printf("p[k]- %d\n",p[k]);
				k++;
        }
       
    }
	printf("res - %d\n",res); 
	res = (n - res)/2; 
    printf("%d",res);
    return 0;
}
