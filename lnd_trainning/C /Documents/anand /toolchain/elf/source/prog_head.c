#include"elfhead.h"
int program_header(char *file)
{
    FILE *fp;
    char *p=0;
    int a = 0,k;

    fp = fopen(file,"r");
    v = malloc(sizeof(Elf32_Ehdr));
    fread(v,sizeof(Elf32_Ehdr),1,fp);
    Elf32_Phdr b[v->e_phnum];

    p = malloc(1000);
    fseek(fp,v->e_phoff,0);     // move file pointer to start of program header
    fread(&b,sizeof(Elf32_Phdr),v->e_phnum,fp);
    fseek(fp,b[v->e_shstrndx].p_offset,0);
    fread(p,1000,1,fp);
	printf("*******************program header*****************\n");
    printf("Type\t\tOffset\tVirtaddr     Phyaddr      Filesz    memSiz  Flg     Align\n");
    for(a = 0;a < v->e_phnum;a++){

    switch(b[a].p_type)
            {
                case PT_NULL :
                            k = printf("NULL");
                                break;
                 case PT_LOAD :
                                k=printf("LOAD");
                                break;
                 case PT_DYNAMIC :
                               k= printf("DYNAMIC");
                                break;
                 case PT_NOTE :
                                k=printf("NOTE");
								break;
                 case PT_PHDR:
                                k=printf("PHDR");
                                break;

                 case PT_INTERP :
                                k=printf("INTERP");
                                break;
                 case PT_GNU_EH_FRAME :
                             k =    printf("GNU_EH_FRAME");
                                break;
                 case PT_GNU_STACK :
                                k=printf("GNU_STACK");
                                break;
                 case PT_GNU_RELRO :
                               k= printf("GNU_RELRO");
                                break;
        }

            k = 15-k;
            printf("%*s",k," ");
            printf("0x%06x",b[a].p_offset);
            printf("\t0x%08x",b[a].p_vaddr);
            printf("   0x%08x",b[a].p_paddr);
            printf("   0x%05x",b[a].p_filesz);
            printf("   0x%05x",b[a].p_memsz);
			switch (b[a].p_flags) {
			
			case PF_X :k = printf ("  E ") ;
					   break ;
			case PF_R :k = printf ("  R ") ;
                       break ;
			case PF_W :k = printf ("  W") ;
                       break ;
			case PF_MASKOS :k = printf ("OS SPECIFIC   ") ;
                       break ;
			case PF_MASKPROC :k = printf ("PROCESSOR SPECIFIC   ") ;
                       break ;
			case PF_R |  PF_W:k = printf ("  RW   ") ;
        					  break ;
			case PF_R | PF_X : k = printf ("  R E  ") ;
							  break ;
			
		}
			k = 10-k;
			printf("%*s",k," ");
            printf("0x%x\n",b[a].p_align);

	}
	return 0;
}
