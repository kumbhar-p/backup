/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[] = "globaledge";
	char s1[] = "dgeglobale";
	int j = strlen(s);
	int l = strlen(s1);
	int p = j-1;
	int x = j-1;
	int count = 0;
	int q = x;
	char *ptr = s;
	char ch;
	int k;
	char *temp = 0;
	temp = s+p;
	if(j != l)
		return -1;
	while(p){
		ch = *temp;
			x=q;
			while(x){
				s[x] = s[x -1];
				x--;
				}
				s[0] = ch;
				count++;
				k = strcmp(s,s1);
				if(k == 0){
					printf("strings are equal:");
					printf("%d\n", count);
					}
			p--;
				
		}
}*/

