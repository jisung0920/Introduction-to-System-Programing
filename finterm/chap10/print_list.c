#include "list.h"
void print_list(LINK head){
  if(head == NULL)
    printf("NULL");
  else{
    printf("%c-->",head->d);
    print_list(head->next);
  }
}
