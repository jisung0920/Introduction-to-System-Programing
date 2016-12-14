#include <stdio.h>
#include <stdlib.h>

#define EMPTY 0
#define FULL 10000

typedef char data;
typedef enum {false,true} boolean;

struct elem {
  data d;
  struct elem *next;
};

typedef struct elem elem;

struct stack{
  int cnt;
  elem *top;
};

typedef struct stack stack;

void init(stack*);
void push(data ,stack*);
data pop(stack*);
data top(stack*);
boolean empty(const stack*);
boolean full(const stack*);
