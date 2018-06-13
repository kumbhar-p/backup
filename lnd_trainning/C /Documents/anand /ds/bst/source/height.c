#include"headers.h"
int height(struct bst *p)
{
    int a ;
    int b ;
    if(p == NULL)
        return 0 ;
    else{
        a = height(p->lnode);
        b = height(p->rnode);
    }
    if(a>b)
        return a+1;
    else
        return b+1;
}	
