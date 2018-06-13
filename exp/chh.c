#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N,num,array[N], i;
    scanf("%d", &num);
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    printf("%d ",num);
    printf("%d ",N);
    int temp,j;
    for (i = 0; i < N; i++)   {
        if(array[i] == num) {
            break;
        }

    }
    printf("%d",i);
    return 0;
}


