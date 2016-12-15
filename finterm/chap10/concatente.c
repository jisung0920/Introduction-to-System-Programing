#include "list.h"

void concatente(LINK a, LINK b){
  assert(a != NULL);
  if(a->next == NULL)
    a->next =b;
  else
  concatente(a->next,b);
}
