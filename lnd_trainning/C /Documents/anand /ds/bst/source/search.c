#include"headers.h"
int search(struct bst *p, int ch)
{
    if(ch == p->roll){

        printf("roll number is present:\n");
        return 0;
    }
    if((p->lnode == 0) | (p->rnode == 0)){

        printf("roll number is not present:\n");
        return 0;
    }
    else if(ch < p->roll)
        search( p->lnode, ch);
    else if(ch > p->roll)
        search(p->rnode, ch);

    return 0;

}
