#include<stdio.h>
#include"header.h"

int main(void)
{
	int num;
	int num1;
	int s;
	int d;
	int n;
	int ch;
	int i;
	char c;

	do {
		printf("enter the choice\n  1. Bit swap\n  2. Swp pos bet 2 no.s\n  3. Copy n bits from num1 to num2\n  4. toggle even & odd bit\n  ");
		printf("5. Test & set the bit\n  6. Rotate bits\n  7. Cnt set bits\n  8. Cnt clr bits\n  9. Cnt leading & trailing set & clr bits\n  ");    	printf("10. Find max no.\n  11. Find min no.\n  12. Set & Clr right & left most bits\n  13. set bit ass10\n  14. invert bit ass11\n  ");
		printf("15. getbits\n");
		printf("\n  ");  
		ch = scan_choice();
	
		switch(ch) {
			case 1 : 
				num = scan_input_num();
				s = scan_s_pos();
				d = scan_d_pos();
				printf("Before\n");
				display(num);
				num = bit_swp(num, s, d);
				printf("After\n");
				display(num);
				break;
			case 2 :
				num = scan_input_num();
				num1 = scan_input_num();
				printf("Before\n");
				display(num);
				display(num1);
				s = scan_s_pos();
				d = scan_d_pos();
				num = bit_swap(num, num1, s, d);
				printf("After\n");
				display(num);
				display(num1);
				break;
			case 3 :
				num = scan_input_num();
				num1 = scan_input_num();
				printf("Before\n");
				display(num);
				display(num1);
				n = scan_n_bits();
				s = scan_s_pos();
				d = scan_d_pos();
				num = bit_copy(num, num1, s, d, n);
				printf("After\n");
				display(num);
				break;
			case 4 :
					printf("enter the choice\n  1. Toggle even bits\n  2. Toggle odd bits\n");
					ch = scan_choice();
				switch(ch) {
					case 1 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						num = even_bit_toggle(num);
						printf("After\n");
						display(num);
						break;
					case 2 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						num = odd_bit_toggle(num);
						printf("After\n");
						display(num);
						break;
					default :
						break;
				}
	//			printf("Do u want to continue y/n\n");
	//			scanf("%c",&c);
				break;
			case 5 : 
				num = scan_input_num();
				s = scan_s_pos();
				num1 = BIT_TS(num, s);
				if(num == num1)
					printf("bit is set\n");
				else
					printf("bit is clear\n");
					display(num1);
				break;
			case 6 :
				printf("enter the choice\n  1. Rotate left\n  2. Rotate left n times\n  3. Rotate right\n  4. Rotate right n times\n");
				ch = scan_choice();
				switch(ch) {
					case 1 :
						num = scan_input_num();
						printf("before rotate \n");
						display(num);  
						num = left_rotate_bits(num);
						printf("After left rotate\n");
						display(num);
						printf("\n");
						break;
					case 2 :
						num = scan_input_num();
						n = scan_n_bits();
						printf("before rotate \n");
						display(num);  
						printf("After left rotate n bits\n");
						num = left_rotate_nbits(num, n);
						display(num);
						break;
					case 3 :
						num = scan_input_num();
						printf("before rotate \n");
						display(num);  
						printf("After right rotate\n");
						num = right_rotate_bits(num);
						display(num);
						printf("\n");
						break;
					case 4 :
						num = scan_input_num();
						n = scan_n_bits();
						printf("before rotate \n");
						display(num);  
						printf("After right rotate n bits\n");
						num = right_rotate_nbits(num, n);
						display(num);
						break;
					default :
						break;
				}
			case 7 :			
				num = scan_input_num();
				printf("before \n");
				display(num);  
				s = count_bit_set(num);
				printf("set bits : %d \n",s);
				break;
			case 8 :
				num = scan_input_num();
				printf("before \n");
				display(num);  
				s = count_bit_clear(num);
				printf("clear bits : %d \n",s);
				break;
			case 9 :
				printf("enter the choice\n  1. Cnt leading set bits\n  2. Cnt leading clr bits\n  3. Cnt trailing set bits\n  ");
				printf("4. Cnt trailing clr bits\n");
				ch = scan_choice();
				switch(ch) {
					case 1 :
						num = scan_input_num();
						printf("before \n");
						display(num);  
						s = cnt_leading_set_bits (num); 
						printf("leading set bits : %d \n",s);
						break;
					case 2 :
						num = scan_input_num();
						printf("before \n");
						display(num);  
						s = cnt_leading_cleared_bits (num); 
						printf("leading clear bits : %d \n",s);
						break;
					case 3 :
						num = scan_input_num();
						printf("before \n");
						display(num);  
						s = cnt_trailing_set_bits (num); 
						printf("trailing set bits : %d \n",s);
						break;
					case 4 :
						num = scan_input_num();
						printf("before \n");
						display(num);  
						s = cnt_trailing_cleared_bits (num);
						printf("trailing clear bits : %d \n",s);
						break;
					default :
						break;
				}
			case 10 :
				num = scan_input_num();
				num1 = scan_input_num();
				if(FIND_MAX(num, num1))
					printf("First no. is greater\n");
				else
					printf("Second no. is greater\n");
				break;
			case 11 :
				num = scan_input_num();
				num1 = scan_input_num();
				if(FIND_MIN(num, num1))
					printf("Second is less\n");
				else
					printf("First is less\n");
				break;
			case 12 :		
				printf("enter the choice\n  1. Clr right most set bit\n  2. Clr left most set bit\n  3. Set right most clr bit\n  ");
				printf("4. Set left most clr bit\n  5. Set bit from s to d clear rest all\n  6. Clr bit frm s to d set rest all\n  ");
				printf("7. Toggle bit frm s to d\n");
				ch = scan_choice();
				switch(ch) {
					case 1 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						num = CLR_RIGHT_SET_BIT(num);   
						printf("After\n");
						display(num);
						break;
					case 2 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						for(i = 31; i >= 0; i--) {
							if(!(CLR_LEFT_SET_BIT(num, i)))
								continue;
							else {
								num = num & ~(1 << i);
								break;
							}	
						}
						printf("After\n");
						display(num);
						break;
					case 3 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						num = SET_RIGHT_CLR_BIT(num);
						printf("After\n");
						display(num);
						break;
					case 4 :
						num = scan_input_num();
						printf("Before\n");
						display(num);
						for(i = 31; i >= 0; i--) {
							if(SET_LEFT_CLR_BIT(num, i))
								continue;
							else {
								num = num | (1 << i);
								break;
							}
						}
						printf("After\n");
						display(num);
						break;	
					case 5 :
						num = scan_input_num();
						s = scan_s_pos();
						d = scan_d_pos();
						printf("Before\n");
						display(num);
						num = SET_S_TO_D_BIT(num, s, d);
						printf("After\n");
						display(num);
						break;
					case 6 :
						num = scan_input_num();
						s = scan_s_pos();
						d = scan_d_pos();
						printf("Before\n");
						display(num);
						num = CLR_S_TO_D_BIT(num, s, d);
						printf("After\n");
						display(num);
						break;
					case 7 :
						num = scan_input_num();
						s = scan_s_pos();
						d = scan_d_pos();
						printf("Before\n");
						display(num);
						num = TOGGLE_S_TO_D_BIT(num, s, d);
						printf("After\n");
						display(num);
						break;
						
					default :
						break;
				}
			case 13 :
				num = scan_input_num();
				num1 = scan_input_num();
				s = scan_s_pos();
				n = scan_n_bits();
				printf("Before\n");
				display(num);
				display(num1);
				num = set_bits(num, num1, s, n);
				printf("After\n");
				display(num);
				break;
			case 14 :
				num = scan_input_num();
				s = scan_s_pos();
				n = scan_n_bits();
				printf("Before\n");
				display(num);
				num = invert_bits(num, s, n);
				printf("After\n");
				display(num);
				break;
			case 15 :
				num = scan_input_num();
				s = scan_s_pos();
				n = scan_n_bits();
				printf("Before\n");
				display(num);
				num = GET_BITS(num, s, n);
				printf("After\n");
				display(num);
			default :
				break;
		}

		printf("do u want to continue y/n\n");
		c = getchar();
	}while(c == 'y' || c == 'Y');
		
	return 0;
}

