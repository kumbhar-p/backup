#include"headers.h"
int insert(struct bst **root, int data)
{
    if(*root == 0){

        struct bst *temp; 
        temp = malloc(sizeof(struct bst));
        if(temp == NULL)
            printf("malloc failed:\n");
        temp->roll = data;
        temp->lnode = 0;
        temp->rnode = 0;
        *root = temp;
    }

    else if(data > (*root)->roll)
        insert((&(*root)->rnode), data);
    else if(data < (*root)->roll)
        insert((&(*root)->lnode), data);

    return 0;
}

int inorder(struct bst *ptr)
{
    if(ptr){
        inorder(ptr->lnode);
        printf("%d  ", ptr->roll);
        inorder(ptr->rnode);
    }
    putchar('\n');
    return 0;
}
int preorder(struct bst *ptr)
{
    if(ptr){
        printf("%d  ", ptr->roll);
        preorder(ptr->lnode);
        preorder(ptr->rnode);
    }
    putchar('\n');
    return 0;
}
int postorder(struct bst *ptr)
{
    if(ptr){
        postorder(ptr->lnode);
        postorder(ptr->rnode);
        printf("%d ", ptr->roll);
    }
    putchar('\n');
    return 0;
}


