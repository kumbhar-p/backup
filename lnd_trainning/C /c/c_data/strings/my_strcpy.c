#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char* my_strcpy(char *target , const char *source)
{
	int i=0;
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

int main(void)
{
	char target = NULL;
	char source = NULL;

	if(NULL == (target = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    if(NULL == (source = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    printf("enter the string\n");
    if(NULL == (fgets(source, BUF, stdin))) {
        perror("fgets failed");
        exit(EXIT_FAILURE);
    }

    for(i = 0 ; i < BUF ; i++)
    {
        if(*source == '\n')
        {
            *source = '\0';
            break;
        }
        source++;
    }
    source = source-i;





//	printf("enter the string\n");
//	scanf("%s",source);
		
	my_strcpy(target,source);
	printf("%s\n",target);	
	return 0;
}
