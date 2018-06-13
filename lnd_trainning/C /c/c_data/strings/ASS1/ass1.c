#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char* my_strcat(char *target , const char *source)
{
	int i=0;

	while(*target){
		target++;
		i++;}
		
		while(*source)
		{
			*target = *source;
			target++;
			source++;
			i++;
		}
		
		*target = *source;
		return target-i;				
}

char* add_n(char *target)
{
	int i;
	for(i = 0 ; i < BUF ; i++){
		if(*target == '\n'){
			*target = '\0';
			break;}
		target++;}
	return  target-i;
}

int main(void)
{
	char *target = NULL;
	char *source = NULL;
	char *cat;
	int i;

	if(NULL == (target = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	if(NULL == (source = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	printf("enter the string1\n");
	if(NULL == (fgets(target, BUF, stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	target = add_n(target);

	for(i = 0 ; i < BUF ; i++){
	
		if((*target==0)||(*target >= 32 && *target <= 64) || (*target >= 65 && *target <= 90) 
					|| (*target >= 97 && *target <= 122)||(*target == 10));

		else {
			printf("Enter valid input\n");
			return 0;
		}
	
	target++;
	}

	target = target - i;

	printf("enter the string2\n");
	fgets(source, BUF, stdin);
	source = add_n(source);
	cat = my_strcat(target,source);
	printf("%s\n",cat);	
	return 0;
}
