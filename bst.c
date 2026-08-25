#include <stdio.h>
#include <stdlib.h>
typedef struct n{
	int data;
	struct n* left;
	struct n* right;
}node;
node* add(node* tree, int x){
	if(tree == NULL){
		node* root = (node*)malloc(sizeof(node));
		root -> right = NULL;
		root -> left = NULL;
		root -> data = x;
		return root;
	}
	if(tree -> data<x){
		tree -> right = add(tree -> right, x);
	}else{
	tree -> left = add(tree -> left, x);
	}
	return tree;
}
void traversal(node* tree){
	if(tree == NULL)
		return;
	traversal(tree -> left);
	printf("%d",tree -> data);
	printf("->");
	traversal(tree -> right);
}
int main(){
	node* tree = NULL;
	tree = add(tree,12);
	tree = add(tree,200);
	tree = add(tree,190);
	tree = add(tree,213);
	tree = add(tree,56);
	tree = add(tree,24);
	tree = add(tree,18);
	tree = add(tree,27);
	tree = add(tree,28);
	traversal(tree);
	
	return 0;
}
