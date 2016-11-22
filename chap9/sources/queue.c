#include <stdio.h>
#include <stdlib.h>
#include "../headers/node.h"

/* Define  'queue' using typedef and struct.
	queue has front, rear, and size */
typedef struct queue{
		node* front;
		node* rear;
		int size;
	}queue;
/* Prototypes */
queue* init_queue();
void enqueue(queue*, node*);
void dequeue(queue*);
int front(queue*);
void print_queue(queue*);


int main(int argc, char const *argv[]){
	int i;
	queue* q = init_queue();
	enqueue(q, newnode(1));
	printf("front : %d\n", front(q));
	dequeue(q);
	dequeue(q);
	for(i = 2; i<6;i++){
		enqueue(q, newnode(i));
	}
	dequeue(q);
	print_queue(q);
	for(i = 0; i<3;i++) dequeue(q);
	front(q);
	return 0;
}
queue* init_queue(){
	queue* temp = (queue*)malloc(sizeof(queue));
	temp->front=NULL;
	temp->rear =NULL;
	temp->size = 0;
	return temp;
}
void enqueue(queue* que, node* newnode){
	if(que->size==0){
		que->front=newnode;
		que->rear=newnode;
		que->front->next = newnode;
		que->size++;
		return ;
	}
	else{
		que->rear->next = newnode;
		que->rear = que->rear->next;
		que->size++;
	}
}
void dequeue(queue* que){
	if(que->size<1){
		printf("deque() :queue is empty\n");
		return ;
	}
	else{
		node* tmp = que->front;
		que->front = que->front->next;
		que->size--;
		free(tmp);
	}
}
int front(queue* que){
	if(que->size<1){
		printf("front() :queue is empty\n");
		return -1;
	}
	return que->front->val;
}
void print_queue(queue* que){
	node* cur = que->front;
	printf("Q : ");
	for(int i=0;i<que->size;i++){
		printf("[%d]",cur->val);
		cur=cur->next;
	}
	putchar('\n');
}
