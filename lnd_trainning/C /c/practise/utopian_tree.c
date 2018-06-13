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
    int s = 0;
    
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    int *p = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(i = 0; i < n; i++) {
        temp = c[i];
   /*     for(j = k; j > 0; j++) {
           if(p[j] == temp)
               s++;
        }
        if(s == 0) {   
        printf("c - %d",c[i]);  */
            for(j = 0; j < n; j++) 
                if(temp == c[j])
                    count++;
                if(count % 2 != 0)
                    res++;
                printf("res = %d\n",res);
                count = 0;
                p[k++] = temp; 
     //   }
    } 
    
    printf("%d",res);
    return 0;
}

