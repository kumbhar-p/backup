#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int log_id;
//char sr_name;
}ST;

ST *hptr = 0;
FILE *fp;

enum id { one = 0 ,two ,three, four, five, six, seven, eight, nine, ten, eleven, 

void add_begin();
void display();

int main(int argc, char **argv)
{
    char *num;
    char ch;

    if(argc < 2) {
        printf("usage :./a.out fname\n");
        exit(EXIT_FAILURE);
    }
        add_begin();

return 0;
}
void add_begin()
{
    ST *new = (ST *)malloc(sizeof(ST));
    fp = fopen(argv[1],"r");
    
	while(1) {
        ST *new = (ST *)malloc(sizeof(ST));
        if(fscanf(fp,"%d",&new -> log_id) != EOF) {
			
            if(hptr == 0) {
                new -> link = 0;
                hptr = new;
            }
            else {
                new -> link = hptr;
                hptr = new;
            }
        }
        else
            break;
    }
    display();
}

/while(fgets(line, SIZE, fp)){          //gets each line of the file
      pch=&line[0];                       //sets the pointer address to the first char in line
      while((pch=strstr(pch,target)) != NULL) {  //searches for all occurrences of target in line
         //printf("%s\n",pch++); getchar();
         count++;
      }

void display()
{
    ST *temp = hptr;
    while(temp) {
        printf("%d -> ",temp -> log_id);
        temp = temp -> link;
    }
}




