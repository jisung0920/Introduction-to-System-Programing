#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define EMPTY 0
#define FULL 10000
typedef struct data{
  enum { operator, value} kind;
  union{
    char op;
    int val;
  }u;
}data;

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

int evaluate(stack*);
void fill(stack*,const char*);
void prn_data(data*);
void prn_stack(stack*);
