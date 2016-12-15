#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0
#define FULL 1000
typedef char data;
typedef enum {false,true} boolean;
typedef struct elem{
  data d;
  struct elem *next;
}elem;
typedef struct stack{
  int cnt;
  elem *top;
}stack;

void init(stack*);
void push(data ,stack*);
data pop(stack*);
data top(stack*);
boolean empty(const stack*);
boolean full(const stack*);
