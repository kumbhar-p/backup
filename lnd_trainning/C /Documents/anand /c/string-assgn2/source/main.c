#include"headers.h"
int main(void)
{
	int *choice = NULL;
	int a;
	menu();
	printf("enter your choice:");
	a = myatoi();
    choice = &a;


	switch(*choice){
						case 1:
								input_strcpy();
								break;

                        case 2:
								input_strncpy();
								break;
						case 3:
								input_strncat();
								break;

						case 4:
								input_strncmp();
								break;
						case 5:

								input_strrchr();
								break;
						case 6:
								input_strspn();
								break;

						case 7:
								input_strcasecmp();
								break;

						case 8:
								input_strtok();
								break;
						case 9:
								input_strcspn();
								break;
						case 10 :
								input_strstr();
								break;
						case 11 :
								input_squeeze();
								break;
						case 12 :
								input_isalnum();
								break;
						case 13 :
								input_isalpha();
								break;
						case 14 :
								input_isdigit();
								break;
						case 15 :
								input_isprint();
								break;
						case 16 :
								input_isxdigit();
								break;
						case 17:
								input_isupper();
								break;
						case 18:
								input_islower();
								break;
						case 19:
								user_rotate();
								break;	
						case 20:
								input_ismacalnum();
								break;
						case 21:
								mac_isalpha();
								break;
						case 22:
								mac_isdigit();
								break;
						case 23:
								mac_isprint();
								break;
						case 24:
								mac_isupper();
								break;	
						case 25:
								mac_islower();
								break;
						case 26:
								mac_isxdigit();
								break;
						case 27:
								comment();
								break;	
						case 28:
								fold();
								break;
						case 29:
								input_iscntrl();
								break;
						case 30:
								syntax();
								break;
						default:
								printf("invalid choice:");
								break;
	}
	return 0;
}
	

