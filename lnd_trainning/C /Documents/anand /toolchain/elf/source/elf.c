#include"elfhead.h"
int elf( char *file)
{
	Elf32_Ehdr *v;
	FILE *fp;
	FILE *fp1;
	int a,i;
	char *p = 0;
	v = malloc(sizeof(Elf32_Ehdr));
    fp = fopen(file,"r");
	fread(v,sizeof(Elf32_Ehdr),1,fp);
	
/*..........................magic info.................................*/
	printf("magic :");
	for(a=0;a<16;a++) 
        printf("%02x ",v->e_ident[a]);
    putchar('\n');
/*......................file identification.......................*/
	if(v->e_ident[EI_MAG0] == ELFMAG0) {
	if(v->e_ident[EI_MAG1] ==ELFMAG1 )
	if(v->e_ident[EI_MAG2] == ELFMAG2)
	if(v->e_ident[EI_MAG3] == ELFMAG3)// class
	if(v->e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("class:\t\t\t\t\tInvalid class\n");
	if(v->e_ident[EI_CLASS] == ELFCLASS32)
        printf("class:\t\t\t\t\tELF32\n");
	if(v->e_ident[EI_CLASS] == ELFCLASS64)
        printf("class:\t\t\t\t\tELF64\n");

	}
	
/*...........................data format............................*/
	switch(v->e_ident[EI_DATA]) {
	
				case  ELFDATA2MSB : // data represenatation  
						printf("Data:\t\t\t\t  2's complement ,big endian\n");
						break;
				case  ELFDATA2LSB:   
        				printf("Data:\t\t\t\t\t2's complement ,little endian\n");
						break;
				case  ELFDATANONE:  
        				printf("Data:\t\t\t\t  Invalid data encoding\n");
						break;
				}
          // version 
	if(v->e_ident[EI_VERSION] == EV_CURRENT)
	printf("version: \t\t\t\t1(current)\n");

/*.................... OS/ABI..............................*/
		printf ("OS/ABI :\t\t\t\t") ; 
	switch (v->e_ident[ EI_OSABI ] ) {

		case  ELFOSABI_SYSV :
			printf ("UNIX System V ABI\n") ;
			break ;
							 
		case  ELFOSABI_HPUX :
			printf ("HP-UX ABI.\n") ;
			break ;
		
		case  ELFOSABI_NETBSD :
			printf ("NetBSD ABI.\n") ;
			break ;
	
		case  ELFOSABI_LINUX :
			printf ("Linux ABI.\n") ;
			break ;
	
		case  ELFOSABI_SOLARIS  :
			printf (" Solaris ABI.\n") ;
			break ;
	
		case  ELFOSABI_IRIX  :
			printf ("IRIX ABI.\n") ;
			break ;
	
		case  ELFOSABI_FREEBSD  :
			printf ("FreeBSD ABI.\n") ;
			break ;

		case  ELFOSABI_TRU64   :
			printf ("TRU64 UNIX ABI.\n") ;
			break ;

		case  ELFOSABI_ARM :
			printf ("ARM architecture ABI.\n") ;
			break ;

		case  ELFOSABI_STANDALONE :
			printf (" ARM architecture ABI.\n") ;
			break ;
		default : printf ("no ABI\n") ;
			break ;
	}


	                            
	printf ("ABI version :\t\t\t\t%d \n",v->e_ident[EI_ABIVERSION] ) ;
		

	


/*....................... file type.................................*/
	// type of a file
	switch(v->e_type){
		case  ET_REL :
				printf("type :\t\t \t\t        relocatable object file:\n");
				break;
		case  ET_EXEC:
        		printf("type: \t\t\t\t\texecutable\n");
				break;
	    case  ET_NONE: 
				printf("type:\t\t\t\t   no file type\n");
				break;
	    case ET_DYN :
        		printf("type:\t\t\t\t   shared object file\n");
				break;
	    case ET_CORE :
        		printf("type:\t\t\t\t   core file\n");
				break;
		case ET_LOPROC: 
        		printf("type:\t\t\t\t   processor-specific\n");
				break;
		case ET_HIPROC: 
        		printf("type:\t\t\t\t   processor-specific\n");
				break;
	}
/*..................... machine type....................................*/
	printf("machine:");
	switch(v->e_machine){
				case  EM_386:
					printf("\t\t\t\tintel 80386\n");
					break;
				case  ET_NONE:
        			printf("\t\t\t\tNo machine\n");
					break;
				case  EM_M32:
        			printf("\t\t\t\tAT&T WE 32100\n");
					break;
				case  EM_SPARC:
        			printf("\t\t\t\tSPARC\n");
					break;
				case  EM_68K:
        			printf("\t\t\t\tmotorola 68000\n");
					break;
				case  EM_88K:
        			printf("\t\t\t\tmotorola 88000\n");
					break;
				case EM_860:
        			printf("\t\t\t\tintel 80860\n");
					break;
				case  EM_MIPS:
        			printf("\t\t\t\tMIPS RS3000 Big - Enaian\n");
					break;
		}

	/*.................... vertion of sysytem..............................*/
    if(v->e_version == EV_CURRENT)
        printf("version:\t\t\t\t0x%x\n",     v->e_version);
    if(v->e_version == EV_NONE)
        printf("version:\t\t\t        Invalid version\n");


	// entry point address
	printf("enty point address : \t\t\t0x%x\n",v->e_entry); 
	// program header table information //
	printf("start of program headers:\t\t");
	printf("%d(bytes into file)\n",v->e_phoff);
	// section header table information //
	printf("start of section headers:\t\t");
    printf("%d(bytes into file)\n",v->e_shoff);
	// flags//
	printf("Flags:\t\t\t\t\t0x%x\n",v->e_flags);
	// size of elf header//
	printf("size of these header: \t\t\t%d\n",v->e_ehsize);
	// size of program header//
	printf("size of program header: \t\t%d\n",v->e_phentsize);
	//	number of program heades//
	printf("number of program header: \t\t%d\n",v->e_phnum);
	// size of section header //
	printf("size of section header: \t\t%d\n",v->e_shentsize);
	// number of section header //
	printf("number of section headers: \t\t%d\n",v->e_shnum);
	// section header string table index //	
	printf("section header string table index: \t%d\n",v->e_shstrndx);
}	
