#include<stdio.h>
#include<stdlib.h>
struct bst{
	int roll;
	struct bst *lnode;
	struct bst *rnode;
}*root;
int myatoi(void);
int insert(struct bst **,int);
int inorder(struct bst *);
int postorder(struct bst *);
int preorder(struct bst *);
struct bst *delete_bst(struct bst **,int);
//struct bst * minimum_bst(struct bst **);
struct bst * minimum_bst1(struct bst *);
int search(struct bst *,int);
int height(struct bst *);
int sum(struct bst *);
//int he_le(struct bst *);
//int he_rh(struct bst *);
