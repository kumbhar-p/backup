#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s,e,d;
    int sum = 0;
    int count = 0,res;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d %d %d",&s,&e,&d);
    
    while(s <= e) {
      int num = s;
    for( ; num; sum = sum * 10 + num % 10,num = num / 10);
       res = abs(s - sum);
//       printf("res - %d ",res);
     if(res % d == 0)
         count++; 
       s++;
	   sum = 0;
   }
    printf("%d",count);
       
    return 0;
}

