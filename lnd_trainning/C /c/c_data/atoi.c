#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *my_atoi(char *op);
int main()
{
	char *str = NULL;
	char *arr = NULL;
	int i;
		if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}
		if(NULL == (arr = (char *)malloc(sizeof(char) * BUF))) {
				perror("malloc failed");
				exit(EXIT_FAILURE);
		}
		if(NULL == (fgets(str, BUF, stdin))) {
                perror("fgets failed");
                exit(EXIT_FAILURE);
        }
		arr = my_atoi(str); 
		for(i = 0;*(arr + i) != '\0'; i++)
			printf("%d\n",*(arr + i));
return 0;
}

char *my_atoi(char *op)
{
        int c = 0;
		char ch;
		char *arr;
		int i =0;

	while(*op) {
		
		if(*op == '-') {
			ch = '-';
			op++;
		}

        while(*op) {
                c = c*10 + *op - 48;
		//		printf("%d ",c);
				op++;
				if(*op == '-')
					break;
        }
		if(ch == '-') {
			c = -c;
			*(arr + i) =  c;
			i++;
		}
		else {
			*(arr + i) =  c;
			i++;
		}			
		ch = '1';
	}
	i++;
	*(arr + i) = '\0';
	return arr;
}   
