#include"elfhead.h"
int symbol(char *file)
{
	Elf32_Ehdr *v;
	Elf32_Shdr *v1;
	Elf32_Sym a;
	FILE *fp;
	char *p=0;
	int l;
	int cnt = 0;

	fp = fopen(file,"r");
	v = malloc(sizeof(Elf32_Ehdr));
	fread(v,sizeof(Elf32_Ehdr),1,fp);
	Elf32_Shdr b[v->e_shnum];

	p = malloc(1000);
	fseek(fp,v->e_shoff,0);
	fread(&b,sizeof(Elf32_Shdr),v->e_shnum,fp);
	cnt = b[v->e_shstrndx+1].sh_size/b[v-> e_shstrndx+1].sh_entsize;
	fseek(fp,b[v->e_shstrndx + 2].sh_offset,SEEK_SET);
    fread(p,b[v->e_shstrndx].sh_size * cnt,1,fp);

    fseek(fp,b[v->e_shstrndx + 1].sh_offset,SEEK_SET);
	printf("*****************Symbol table********************\n");
	printf("Num:\tvlaue\tSize   type  Bind  Vis    Ndx   Name\n");
	for(l = 0;l<cnt;l++){
		fread(&a,sizeof(Elf32_Sym),1,fp);

        printf(" %2d: ", l);
        printf("%08x", a.st_value);
        printf("%6d ", a.st_size);


    switch ( (a.st_info) & ( 0xf)) {
        case STT_NOTYPE  :printf("%-8s","NOTYPE");
                          break;
        case STT_OBJECT  :printf("%-8s","OBJECT");
                          break;
        case STT_FUNC    :printf("%-8s","FUNC");
                          break;
        case STT_SECTION :printf("%-8s","SECTION");
                          break;
        case STT_FILE    :printf("%-8s","FILE");
                          break;
        case STT_COMMON  :printf("%-8s","COMMON");
                          break;
        case STT_NUM     :printf("%-8s","NUM");
                          break;
    }
    switch( a.st_info >> 4) {
        case STB_LOCAL  :printf("%-7s","LOCAL");
                         break;
        case STB_GLOBAL :printf("%-7s","GLOBAL");
                         break;
        case STB_WEAK   :printf("%-7s","WEAK");
                         break;
         case STB_NUM   :printf("%-7s","NUM");
                         break;
         case STB_LOOS  :printf("%-7s","LOOS");
                         break;
    }

    switch(a.st_other & (0x03)) {
        case STV_DEFAULT    :printf("%-8s","DEFAULT");
                             break;
        case STV_INTERNAL   :printf("%-8s","INTERNAL");
                             break;
        case  STV_HIDDEN    :printf("%-8s","HIDDEN");
                             break;
        case STV_PROTECTED  :printf("%-8s","PROTECTED");
                             break;
    }

    if(a.st_shndx == SHN_UNDEF) 
        printf("%4s ","UND");
    else if(a.st_shndx == SHN_ABS)
        printf("%4s ","ABS");
    else
        printf("%4d ",a.st_shndx);

    printf("%-25s",p + a.st_name);
    printf("\n");
    }
    return 0;
}
