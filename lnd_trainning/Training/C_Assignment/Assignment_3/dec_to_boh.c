#include<stdio.h>

int dec_to_boh(int num, char ch)
{
        int rem,div,i = 0,j;
        int a[10];

        if(ch == '1')
                div = 2;
        else if(ch == '2')
                div = 8;
        else if(ch == '3')
                div = 16;




        if(div != 16) {
                while(num) {
                        rem = num % div;
                        a[i++] = rem;
                        num = num / div;
                }
        }
        else {
                while(num) {
                        rem = num % div;
                        if(rem >= 10 && rem <=15)
                                a[i] = (rem - 10) + 'A';
                        else {
                                if(rem >= 0 && rem <= 9)
                                        a[i] = rem + '0';
                        }
                        num = num / div;
                        i++;
                }
        }

        if(div == 16) {
                for(j=i-1;j>=0;j--)
                        printf("%c",a[j]);
        }
        else if(div == 2 || div == 8) {
                for(j=i-1;j>=0;j--)
                        printf("%d",a[j]);
        }

        printf("\n");
return 0;
}

