#include"headers.h"
int print(struct tag *p)
{
    printf("***********************************\n");

    while(p){
        printf("no:->%d ",p->roll);
        p = p->link;
    }
    putchar('\n');
    printf("***********************************\n");
	return 0;
}

int print1(struct tag1 *p)
{
    printf("***********************************\n");
	while(p) {
		printf("no:->%d ",p->roll);
		p = p->next;
	}
    putchar('\n');
    printf("***********************************\n");
	return 0;
}
