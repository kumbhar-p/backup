#include"elfhead.h"
int section_header(char *file)
{
    Elf32_Shdr *v1;
    FILE *fp;
    char *p=0;
    int a = 0;
	int k = 0; 
    fp = fopen(file,"r");
    v = malloc(sizeof(Elf32_Ehdr));
    fread(v,sizeof(Elf32_Ehdr),1,fp);
    Elf32_Shdr b[v->e_shnum];			// arrray of structures

    p = malloc(1000);
    fseek(fp,v->e_shoff,0); // moving file pointer to start of section header
    fread(&b,sizeof(Elf32_Shdr),v->e_shnum,fp);
    fseek(fp,b[v->e_shstrndx].sh_offset,0); // move file pointer to string table
    fread(p,1000,1,fp);
	printf("*****************section header *******************\n");
	printf(" [Nr]\tName\t\tType\t\tAddr\t Off\tSize   ES Flg LK Info Al\n");
    for(a = 0;a < v->e_shnum;a++){
    k =     printf(" [%2d]  %s",a,p+b[a].sh_name);
    k = 25-k;
    printf("%*s",k," ");
    switch(b[a].sh_type)     // to identify section type
            {
                case SHT_NULL :
                                k = printf("NULL");
                                break;
                 case SHT_PROGBITS :
                                k  = printf("PROGBITS");
                                break;
                 case SHT_SYMTAB :
                                k = printf("SYMTAB");
                                break;
                 case SHT_STRTAB :

                                k = printf("STRTAB");
                                break;

                 case SHT_REL :
                                k = printf("REL");
                                break;
                case SHT_DYNAMIC :
                                k = printf("DYNAMIC");
                                break;
                case SHT_NOTE :
                                k = printf("NOTE");
								break;
                case SHT_GNU_HASH:
                                k = printf("GNU_HASH");
                                break;
                case SHT_DYNSYM :
                                k = printf("DYNSYM");
                                break;
                case SHT_GNU_versym :
                                k = printf("VERSYM");
                                break;
                case SHT_GNU_verneed :
                                k = printf("VERNEED");
                                break;
                case SHT_INIT_ARRAY :
                                k = printf("INIT_ARRAY");
                                break;
                case SHT_FINI_ARRAY :
                                k = printf("FINY_ARRAY");
                                break;
                 case SHT_NOBITS :
                                k = printf("NOBITS");
                                break;
            }
            k = 15-k;
            printf("%*s",k," ");
            printf("%08x ",b[a].sh_addr);    // section address
            printf("%06x ",b[a].sh_offset);	// offset address
            printf("%06x ",b[a].sh_size);	//size of each section
            printf("%02x ",b[a].sh_entsize);	// entry size of each section

			switch  (b[a].sh_flags ) {       // flags in section header
			
			 default 		:	k = printf("%3s"," ");    
								break;
			case SHF_WRITE :k =  printf ("%3s","W") ;
								break ;

			case SHF_ALLOC :k = printf ("%3s","A") ;
								break ;

			case SHF_EXECINSTR :k = printf ("%3s","X") ;
								break ;

			case  SHF_MERGE :k = printf ("%3s","M") ;
								break ;

			case SHF_STRINGS :k = printf ("%3s","S") ;
							  	break ;

			case SHF_ALLOC | SHF_EXECINSTR : k = printf ("%3s","AX") ;
											 break ;

			case  SHF_WRITE | SHF_ALLOC : k = printf ("%3s","WA") ;
										 	 break ;

			case SHF_MERGE | SHF_STRINGS : k = printf ("%3s","MS") ;
										     break ;
		
		}

            k= printf(" %d",b[a].sh_link);
            k =5-k;
            printf("%*s",k," ");
            k = printf("%d",b[a].sh_info);
            k =5-k;
            printf("%*s",k," ");
			printf("%d\n",b[a].sh_addralign);

	}
	return 0;
}
