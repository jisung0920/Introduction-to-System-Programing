#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define EMPTY 0
#define FULL 0
typedef unsigned int data;
typedef enum {false,true} boolean;
struct elem {
  data d;
  struct elem *next;
};

typedef struct elem elem;
typedef struct {
  int cnt;
  elem *front;
  elem *rear;
}queue;

void init(queue*);
void enqueue(data,queue*);
data dequeue(queue*);
data front(queue*);
boolean empty(const queue*);
boolean full(const queue*);
