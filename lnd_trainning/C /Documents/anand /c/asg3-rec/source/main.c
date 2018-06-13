#include"headers.h"
int main(void)
{
	int choice;
	menu();
	printf("enter choice:");
	choice = myatoi();
	
	switch(choice) {
					case 1:
							rem_blanks();
							break;
					case 2:
							cross_ref();
							break;
					case 3:
							input();
							break;
					case 4:
							input_prime();
							break;
					case 5:
							input_binary();
							break;
					case 6:
							input_power();
							break;
					case 7:
							input_num();
							break;
					case 8:
							divisors();
							break;
					case 9:
							stack();
							break;
					case 10:
							queue();
							break;
					case 11:
							palindrome();
							break;


				}


	return 0;
}
	
