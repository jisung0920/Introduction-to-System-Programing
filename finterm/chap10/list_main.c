#include "list.h"

int main(void){
  LINK h;
  h = string_to_list("ABC");
  printf("result\n");
  print_list(h);
  printf("\nthis list has %d element\n",count(h) );
  return 0;
}
