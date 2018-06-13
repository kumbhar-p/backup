#include"headers.h"
int input_isalnum(void)
{
	char *str1 = NULL;
	int j;
	int i;
	printf("enter the string:");
	str1 = str_valid();
	for(j=0 ; str1[j]!= '\n' ; j++) {
		i = user_isalnum(str1[j]);
		if( i == 1 )
			printf("entered one is alphanumeric char=%c\n",str1[j]);
		else
			printf("entered one is not alphanumeric char=%c\n",str1[j]);
		}
	return 0;
}
int user_isalnum(int ch)
{
	if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) || ((ch >= '0') && (ch <= '9')))
		return 1;
	else
		return 0;
}
