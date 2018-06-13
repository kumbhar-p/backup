#include"headers.h"
int  main(int argc,char **argv)
{
	int n1;
	int n2;
	char n3;
	int choice;
	while(1){
	printf(				   "\t1.bit_swap\n"			  
                           "\t2.bit_cp\n"	
		         		   "\t3.even and odd bit toggle\n"
						   "\t4.bit test and set\n"
						   "\t5.reverse\n"
						   "\t6.arthmetic\n"
						   "\t8.rotate\n"
						   "\t9.countbits\n"
						   "\t10.trailing zero's\n"
						   "\t11.macro\n"
						   "\t12.command line passing\n"
						   "\t13.copy bits\n"
						   "\t14.setbits\n"
						   "\t15.invert\n"
						   "\t16.rightrot\n"
						   "\t17.clear right most\n"
						   "\t18.setbits from posotion\n" 
						   "\t19.toggle bits from position\n");	
	printf("enter your choice value:");
	choice = myatoi();
	switch(choice){
						case 1 :                         // swapping of two bits
   								bit_swap( );
					 			break;
                 	    case 2 :						//  copying of source bit to destinationposition					
   								cp();
								break;
 
				        case 3 :
								fun_even( );		// functions for even and odd toggle
   								fun_odd( );
								break;

				 		case 4 :
								bit_ts( );			// function for test a bit and set a bit
 								break;
	 	
				 		case 5 :
								reverse_bits();     // reversing bits in a number
								break;

                        case 6 :
                                arthmatic();        // arthmatic operations by using bitwise operators
                                break;
						case 8 :
                                rotate();			// function for left and right shift	
                                break;
						case 9 :
								                    // function for counting a bits
                                count_bit( ); 
								break;
		

				       case 10 :                        // function to calculate  tariling zeros
                                trail( );
                                break;
                       case 11 :
                                min( );			// macro to calculate min and max	
                                break;
                       case 12:							// arthmatic calculation through command line
                                n1 = atoi(argv[1]);
                                n2 = atoi(argv[2]);
                                n3=*(argv[3]);
                                commandline(n1,n2,n3);
                                break;


				       case 13 :						// function to copy bits
					        	 cpy_bits ( );
								 break;

				       case 14 :                        // function to set bits
                                 setbits( );
                                 break;


                       case 15 :                         // function to invert bits
								invert(  );	
                         		break;
                       case 16 :                          // shifting operation
   					        	rightshift(  );
								break;			

				       case 17:							// macro clear msb
								clr_msb();	
					        	break;
                       case 18:							// macro to set bits
								setbits_pos( );	
								break;
                       case 19:							// macro to toggle bits
								toggle_bits( );
								break;
												         
				      default:  printf("invalid choice:\n");
						  		break;
						
              }
		}
	return 0;

}
