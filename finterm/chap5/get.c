#include "hanoi.h"

int get_n_from_user(void){
  int n;
  if(scanf("%d\n",&n ) != 1 || n<1){
      printf("error\n");
      exit(1);
  }
  printf("\n");
  return n;
}
