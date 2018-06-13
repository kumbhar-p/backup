#include<stdio.h>
#include<elf.h>
#include<stdlib.h>
int section_header(char *);
int program_header(char *);
int symbol(char *);
int dynamic_symbol(char *);
int elf(char *);
Elf32_Ehdr *v;
