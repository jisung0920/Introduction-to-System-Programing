#include <stdio.h>
#include <stdlib.h>
#include "../headers/node.h"

/* Define  'list' using typedef and struct.
	queue has head, and size */
typedef struct list{
	node* head;
	int size;
}list;
/* Prototypes */
list* init_list();
void appendTo(list* list, node* newnode);
void delAt(list* list, int n);
void print_list(list* list);

int main(int argc, char const *argv[]) {
	list* linked = init_list();
	int i;
	for (i = 1; i < 6; i++) {
		appendTo(linked, newnode(i));
	}
	print_list(linked);
	delAt(linked, -1);
	delAt(linked, 5);
	print_list(linked);
	delAt(linked, 3);
	print_list(linked);
	free(linked);
	return 0;
}

list* init_list(){
	list* temp = (list*)malloc(sizeof(list));
	temp->head=NULL;
	temp->size = 0;
	return temp;
}

void appendTo(list* list, node* newnode){
	if(list->size == 0){
		list->head=newnode;
		list->size++;
		return ;
	}
	else{
		node *cur=list->head;
		for(int i=1;i<list->size;i++)
			cur=cur->next;
		cur->next=newnode;
		list->size++;
	}
}
void delAt(list* list, int n){
	if(n>(list->size) || n<1){
		printf("%d is out of range\n",n);
		return ;
	}

	node* cur=list->head;

	if(list->size==1){
			free(cur);
			list->size--;
			return ;
	}

	for(int i=1;i<n-1;i++)
		cur=cur->next;
	node* del = cur->next;
	cur->next =del->next;
	list->size--;
	free(del);
}
void print_list(list* list){
	node* cur = list->head;
	printf("list size : %d \n",list->size);
	for(int i=0;i<list->size;i++){
		printf("[%d]",cur->val);
		cur=cur->next;
	}
	putchar('\n');
}
