#include "list.h"
LINK s_to_l(char s[]){
  LINK head = NULL,tail;
  int i;
  if(s[0]!='\0'){
    head = malloc(sizeof(ELEMENT));
    head -> d = s[0];
    tail = head;

  for(i=1;s[i]!='\n';++i){
    tail->next = malloc(sizeof(ELEMENT));
    tail = tail ->next;
    tail->d =s[i];
    }
    tail->next;
  }
  return head;
}
