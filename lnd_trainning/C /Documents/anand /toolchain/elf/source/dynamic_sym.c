#include"elfhead.h"
int dynamic_symbol(char *file)
{

    int i = 0;
    Elf32_Shdr w[v->e_shnum];/* Section header structure array */
    Elf32_Sym x;/* Section header structure array */
    char *p = NULL;/* buffer for storing offset of names */
    int cnt = 0;
	FILE *fp;
    fp = fopen(file,"r");    
    p = (char *)malloc(1000);

    fseek(fp,v->e_shoff,SEEK_SET);
    fread(&w,sizeof(Elf32_Shdr),v->e_shnum,fp);
    


    cnt = w[v -> e_shstrndx - 22].sh_size / w[v -> e_shstrndx - 22].sh_entsize;

    fseek(fp,w[v->e_shstrndx - 21].sh_offset,SEEK_SET);
    fread(p,w[v->e_shstrndx].sh_size * cnt,1,fp);

    fseek(fp,w[v->e_shstrndx - 22].sh_offset,SEEK_SET);
    
    printf("\nDynbol table '.symtab' contains %d entries:\n", cnt);
    printf("Num:\tValue  Size Type    Bind   Vis\t    Ndx Name\n");

    for ( i =0; i < cnt; i++ ) {

    fread(&x,sizeof(Elf32_Sym),1,fp);

    printf(" %2d: ", i);
    printf("%08x", x.st_value);
    printf("%6d ", x.st_size);


   switch ( ELF32_ST_TYPE(x.st_info) & ( 0xf)) {
        case DT_NULL  :printf("%-8s","NOTYPE");
                          break;
        case DT_NEEDED  :printf("%-8s","OBJECT");
                          break;
        case   DT_PLTRELSZ :printf("%-8s","FUNC");
                          break;
        case DT_PLTGOT:printf("%-8s","SECTION");
                          break;
        case  DT_HASH    :printf("%-8s","FILE");
                          break;
        case DT_STRTAB :printf("%-8s","COMMON");
                          break;
        case  DT_SYMTAB  :printf("%-8s","NUM");
                          break;
        case  DT_RELA  :printf("%-8s","NUM");
                          break;
        case DT_RELASZ   :printf("%-8s","NUM");
                          break;
        case DT_STRSZ   :printf("%-8s","NUM");
                          break;
        case DT_SYMENT   :printf("%-8s","NUM");
                          break;
        case DT_INIT   :printf("%-8s","NUM");
                          break;
    }
    switch(ELF32_ST_TYPE(x.st_info >> 4)) {
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

    switch(x.st_other & (0x03)) {
        case STV_DEFAULT    :printf("%-8s","DEFAULT");
                             break;
        case  STV_HIDDEN    :printf("%-8s","HIDDEN");
                             break;
        case STV_PROTECTED  :printf("%-8s","PROTECTED");
                             break;
    }

    if(x.st_shndx == SHN_UNDEF) 
        printf("%4s ","UND");
    else if(x.st_shndx == SHN_ABS)
        printf("%4s ","ABS");
    else
        printf("%4d ",x.st_shndx);

    printf("%-30s",p + x.st_name);

   // printf("Vis: %d", x.st_other);
 //  if(ELF32_ST_TYPE(x.st_info) & ( 0xf) == DT_PLTRELSZ)
   //    printf("@GLIBC_2.0 (2)");

    printf("\n");
    }
    return 0;
}
