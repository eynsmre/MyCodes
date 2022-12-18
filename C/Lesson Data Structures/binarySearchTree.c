#include <stdio.h>
#include <stdlib.h>

typedef struct bst{
	int data;
	struct bst* right;
	struct bst* left;
}bst;



bst *append(bst *root, int data){
	if(root == NULL){
		root = (bst*)malloc(sizeof(bst));
		root->data = data;
		root->right = NULL;
		root->left = NULL;
		return root;
	}
	
	if(root->data >= data)
		root->left = append(root->left,data);
	else
		root->right= append(root->right,data);
	
	return root;	
	
}

void display(bst *root){
	if(root == NULL)
		return;
	display(root->left);
	printf("%d ",root->data);
	display(root->right);
	
}

int main(){
	bst *root = NULL;
	int choice, val;
	printf("(1) Append (2) Display \nChoice : ");
	scanf("%d",&choice);
	
	while(choice==1 || choice==2){
		
		if(choice == 1){
			if(root==NULL){
				printf("Value: ");
				scanf("%d",&val);
				root = append(root,val);
			}
			else{
				printf("Value: ");
				scanf("%d",&val);
				append(root,val);
			}
		
		}
			
		else if(choice == 2)
			display(root);	
	
		scanf("%d",&choice);
	}
		
	return 0;
}
