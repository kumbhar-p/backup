#include"headers.h"
struct bst *delete_bst1(struct bst *p, int ch)
{
    struct bst *temp;
    if( p == NULL){
        printf("no data present:\n");
        return 0;
    }	
    else if( ch < p->roll)
        p->lnode = delete_bst1(p->lnode,ch);
    else if(ch > p->roll)
        p->rnode = delete_bst1(p->rnode,ch);

    else { 

        if(p->lnode == 0 && p->rnode == 0) {
            p = NULL;
            free(p);
        }
        else if((p->rnode) == 0){
            temp = p;
            p = p->lnode;
            free(temp);
        }
        else if((p->lnode) == 0){
            temp = p;
            p = p->rnode;
            free(temp);
        }
        else{
            temp = minimum_bst1(p->rnode);
            p->roll = temp->roll;
            p->rnode = delete_bst1(p->rnode,temp->roll);
        }
    }
    return p;
}







































/*int delete_bst(struct bst **p,int ch)
{
	struct bst *temp;
	struct bst *temp1;
	struct bst *temp2;
	int val;
	temp = *p;
	if(root->roll == ch) {
	//	getchar();
	//	printf("kjsdhfkjdhf\n");
		temp2 = root;
		temp1 = minimum_bst1((root->rnode));
		val = temp->roll;
		temp->roll = temp1->roll;
		temp1->roll = val;
//		temp1 = NULL;
		free(temp1);
		temp1 = NULL;
		return 0;
	}
	
	if((*p)->roll == ch) {
	temp1 =	minimum_bst(&(*p));
	val = temp1->roll;
	temp1->roll = temp->roll;
	temp->roll = val;
	free(temp1);
	temp->lnode = 0;
	}
	
	
	else if( ch < (*p)->roll)
		delete_bst(&((*p)->lnode),ch);
	else if(ch > (*p)->roll)
		delete_bst(&((*p)->rnode),ch);
}
struct bst * minimum_bst(struct bst **q)
{
	if((*q)->lnode != 0)
		minimum_bst((&(*q)->lnode));
	return *q;
} */
struct bst *minimum_bst1(struct bst *q)
{
	if(q->lnode != 0)
		minimum_bst1(q->lnode);
	return q;
}
