#include "list.h"
int count(LINK head){
  if(head ==NULL)
    return 0;
  else
    return (1+count(head->next));
}
