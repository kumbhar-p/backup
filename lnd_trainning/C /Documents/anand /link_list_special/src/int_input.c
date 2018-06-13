#include <stdio.h>
#include <stdlib.h>

void int_input(int *num)
{
	int i = 0;
	char temp;
	char check = 0;
	char arr[] = "2147483648";
	char cnt_dot = 0;
	char cnt_char = 0;
	char flag_space = 0;
	char flag_once = 0;
	char flag_sign = 0;
	char flag_tab = 0;
	char flag_range_once = 0;
	char flag_dot = 0;
	int flag_terminate = 0;

	*num = 0;
	while ((temp = getchar()) ) {
		if( (temp == '\n') || (temp == EOF) ) 
			break;
		
		if ((flag_space == 0) &&  ((temp == ' ') || (temp == '\t')) )
			continue;
		
		flag_space = 1;
	
		if (flag_once == 0) {
			flag_once = 1;
			if ((temp == '+') || (temp == '-') || (temp == '.')) {
				if (temp == '+')
					continue;
				else if (temp == '-') {
					flag_sign = 1;
					continue;
				}
				else if (temp == '.') {
					cnt_dot++;
					continue;
				}
			}
		}
	
		
		if( ! ( ((temp >=48) && (temp <= 57)) || (temp == '.') || (temp == ' ') || (temp == '\t') )) {
			printf("\nwrong input\n");
			printf("re-enter the input\n");
			while((temp = getchar()) != '\n');
			int_input(num);
			return;
		}

		if ((temp == ' ') || (temp == '\t')) {
			flag_tab = 1;
			continue;
		}
		
		if (flag_tab == 1) {
			printf("\nwrong input\n");
			printf("re-enter the input\n");
			while((temp = getchar()) != '\n');
			int_input(num);
			return;
		}

		if (temp == '.') {
			cnt_dot++;
			if(cnt_dot >1) {
				printf("\nwrong input\n");
				printf("re-enter the input\n");
				while((temp = getchar()) != '\n');
				int_input(num);
				return;
			}
			continue;
		}
		
		if (cnt_dot == 0) { 
			*num = (*num) * 10 + (temp - 48);
			check = 1;
		}

		if (((*num) != 0) && (cnt_dot == 0))
			cnt_char++;

		if (cnt_dot == 1) {
			check = 1;
			flag_dot++;
		}

		if (cnt_char > 10) {
			while((temp = getchar()) != '\n');
			printf("\nout of range\n");
			printf("re-enter the input\n");
			int_input(num);
			return;
		}

		if (flag_range_once == 0)
		{
			if (temp > arr[i])
				flag_range_once = 1;
			if (temp < arr[i++])
				flag_range_once =2;
		}

	}
	if ( (cnt_dot == 1) && (flag_dot == 0) ) {
		printf("\nwrong input\n");
		printf("re-enter the input\n");
		int_input(num);
		return;
	}
		
	if (((cnt_char == 10) && (flag_range_once == 1))) {
		printf("\nout of range\n");
		printf("re-enter the input\n");
		int_input(num);
		return;
	}
	
	else if ( (cnt_char == 10) && (flag_range_once == 0) && (flag_sign == 0) ) {
		printf("\nout of range\n");
		printf("re-enter the input\n");
		int_input(num);
		return;
	}
	
	if (check == 0) {
		printf("\nwrong input\n");
		printf("re-enter the input\n");
		int_input(num);
		return;
	}
	
	if (flag_terminate == 1) {
		printf("re-enter the input\n");
		int_input(num);
		return;
	}
	if (flag_sign == 1)
		*num = -(*num);
	return;
}	
