#include"headers.h"
int main(void)
{
	int choice;
	while(1){
	printf("\n1.single_inser bigin\n"
		   "2.single_inser end\n"
		   "3.single_inser mid\n"
		   "4.delete\n"
		   "5.print-single\n"
		   "6.double_inser_big\n"
		   "7.print-double\n"
		   "8.double_inser_end\n"
		   "9.dubble_big\n"
		   "10.dub delete\n"
		   "11.circular add bigin\n"
		   "12.cir_add_end\n"
		   "14.circular delete\n"
		   "15.cir_mid\n"
		   "16.dub_cir_end\n"
		   "17.dub_cir_big\n"
		   "18.cir_dub_mid\n"
		   "19.cir_dub_delete\n"
		   "20.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice) {
					case 1:
							input_inser_big();
							break;
					case 2:
							input_inser_end();
							break;
					case 3:
							inser_mid();
							break;
					case 4:
							delete_node();
							break;

					case 5:
							print(head);
							break;
					case 6:
							input_dub_inser_big();
							break;
					case 7:
							print1(head1);
							break;
					case 8:
							input_dub_inser_end();
							break;
					case 9:
							dub_mid();
							break;
					case 10:
							dub_delete();
							break;
					case 11:
							cir_inser_big();
							break;
					case 12:
							cir_inser_end();
							break;
					case 14:
							cir_delete();
							break;
					case 15:
							cir_mid();
							break;
					case 16:
							cir_dub_end();
							break;
					case 17:
							cir_dub_big();
							break;
					case 18:
							cir_dub_mid();
							break;
					case 19:
							cir_dub_delete();
							break;
					case 20:
							return 0;
				}
}
}
					 
