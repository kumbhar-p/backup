#include"headers.h"
int val;
int main()
{
    int ch;
    while(1) {
        printf("1.insert\n2.delete\n3.search\n4.inorder\n5.pre-order\n" 
                "6.post-order\n7.hight of tree\n8.sum of nodes\n9.exit\n");
        printf("enter your choice:");
        ch = myatoi();
        switch(ch) {
            case 1:	
                printf("enter the value:");
                ch = myatoi();
                insert(&root, ch);
                break;
            case 2:
                printf("enter the value to delete:");
                ch = myatoi();
                root = (struct bst *)delete_bst1(root, ch);
                break;
            case 3:
                printf("enter the value to search:");
                ch = myatoi();
                search(root, ch);
                break;
            case 4:
                inorder(root);
                break;
            case 5:
                preorder(root);
                break;
            case 6:
                postorder(root);
                break;
            case 7:
                ch = height(root);
                printf("height = %d\n", ch);
                break;
            case 8:
                ch =	sum(root);
                printf("sum=%d\n", ch);
                break;
            case 9:
                exit(0);
                break;

        }
    }
}		

int sum(struct bst *p)
{
    if( p ) {

        sum(p->lnode);
        val = val+p->roll;
        sum(p->rnode);

    }
    return val;
}





