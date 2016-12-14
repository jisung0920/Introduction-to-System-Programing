#include "stack.h"
int main(void){
  char str[] = "My name is joanna Kelly!";
  int i;
  stack s;
  init(&s);
  for(i=0;str[i]!='\0';++i)
    if(!full(&s))
      push(str[i],&s);
  while(!empty(&s))
    putchar(pop(&s));
  putchar('\n');
  return 0;
}
