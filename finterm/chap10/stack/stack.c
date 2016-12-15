#include "stack.h"

void init(stack *stk){
  stk->top =NULL;
  stk->cnt =0;
}
void push(data d,stack *stk){
  elem *p;
  p = malloc(sizeof(elem));
  p->d = d;
  p->next = stk->top;
  stk->top =p;
  stk->cnt++;
}
data pop(stack *stk){
  elem* p;
  data d;
  p=stk->top;
  d=stk->top->d;
  stk->top = stk->top->next;
  stk->cnt--;
  free(p);
  return d;
}
data top(stack *stk){
  return stk->top->d;
}
boolean empty(const stack *stk){
  return (boolean) stk->cnt==EMPTY;
}
boolean full(const stack *stk){
  return (boolean) stk->cnt ==FULL;
}
