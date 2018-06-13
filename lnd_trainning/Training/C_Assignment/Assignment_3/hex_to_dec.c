#include<stdio.h>
#include<math.h>


int hex_to_dec(char *hex, int i)
{
    int j, result = 0;
    double k = 0;
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
    
    return result;
}


