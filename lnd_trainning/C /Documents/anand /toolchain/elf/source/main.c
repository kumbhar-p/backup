#include"elfhead.h"
int main(int argc , char **argv)
{

	elf(argv[1]);                    // Elf header function
	section_header(argv[1]);         // section header
	if(v->e_type == ET_EXEC)
		program_header(argv[1]);
	else
		printf("*******program header not there for .o files*************\n");
	symbol(argv[1]);	

	if(v->e_type == ET_EXEC)
		dynamic_symbol(argv[1]);
	else
		printf("*******dynamic symbol  not there for .o files*********\n");
		
	return 0;

}
