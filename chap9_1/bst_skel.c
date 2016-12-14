#include <stdio.h>
#include <stdlib.h>
typedef char Data;
static int dir;

typedef struct tnode{
	/* Define node */
		Data data;
		struct tnode* leftChild;
		struct tnode* rightChild;
} tnode;


typedef struct tree{
	tnode* root;
} tree;

tnode* newtnode(Data);

tree* newtree();

void inorder(tnode*);

void preorder(tnode*);

void postorder(tnode*);

void insert_node(tnode*, tnode*);

void insert(tree*, tnode* );

int main(int argc, char const *argv[]){
	tree* t = newtree();
	char a[10] = {'G','D','I','B','F','H','J','A','C','E'};
	int i;
	for(i = 0; i<10;i++){
		insert(t, newtnode(a[i]));
	}
	inorder(t->root);
	putchar('\n');
	preorder(t->root);
	putchar('\n');
	postorder(t->root);
	return 0;
}

tnode* newtnode(Data data){
	tnode* nNode = (tnode*)malloc(sizeof(tnode));
	nNode->data =data;
	nNode->leftChild=NULL;
	nNode->rightChild=NULL;
	return nNode;
}

tree* newtree(){
	tree* nTree = (tree*)malloc(sizeof(tree));
	nTree->root =NULL;

	return nTree;
}

void inorder(tnode* node){
	if(node == NULL)
		return ;
	inorder(node->leftChild);
	printf("[%c]",node->data);
	inorder(node->rightChild);
}

void preorder(tnode* node){
	if(node == NULL)
		return ;
	printf("[%c]",node->data);
	preorder(node->leftChild);
	preorder(node->rightChild);
}

void postorder(tnode* node){
	if(node == NULL)
		return ;
	postorder(node->leftChild);
	postorder(node->rightChild);
	printf("[%c]",node->data);

}
void insert(tree* tree, tnode* node){
 		tnode* cur =tree->root;
 		if(cur == NULL){
 			tree->root = node;
 			return ;
 		}
 		tnode* par = cur;
 		while(cur !=NULL){
 			par=cur;
 			if(cur->data>node->data){
 				cur=cur->leftChild;
 				dir=1;
 			}
 			else{
 				cur=cur->rightChild;
 				dir=0;
 			}
 		}
 		if(dir)
 			par->leftChild=node;
 		else
			par->rightChild=node;
}

/*
void insert(tree* tree, tnode* node){
	if(tree->root ==NULL)
		tree->root = node;
	else if((tree->root->data) > (node->data)){
		insert_node(tree->root,node);
	}

	else{
		insert_node(tree->root,node);
	}
}

void insert_node(tnode *node, tnode *nNode){

}*/

/*
void insert(tree* tree, tnode* node){
	if(tree->root ==NULL)
		tree->root = node;
	tnode *cur =tree->root;
	tnode *ln = NULL;
	tnode *rn = NULL;
	while(cur!=NULL){

		if(cur->data < node->data){
				if(cur->leftChild==NULL){
					ln=cur;
					cur = cur->leftChild;
				}
		}
		else{
				if(cur->rightChild==NULL){
					rn=cur;
					cur = cur->rightChild;
				}
		}

	}
	cur= node;
	if(ln!=NULL)
		ln->leftChild=cur;
	if(rn!=NULL)
		rn->rightChild=cur;
}
/*
void* insert(node * root, int value)
{
   node * r = root;
   node *rs = NULL;
   node *ls = NULL;

   if(root == NULL){
       root = new node;
       root->data = value;
       root->left = root->right = NULL;
   }

   while(r != NULL){
       if(value < r->data){
           if(r->left == NULL) ls = r;
           r = r->left;
       } else if(value > r->data) {
           if(r->right == NULL) rs = r;
           r = r->right;
       }
   }

   r = new node;
   r->data = value;
   r->left = r->right = NULL;
   if(ls != NULL) ls->left = r;
   if(rs != NULL) rs->right = r;

   return root;
}
*/
