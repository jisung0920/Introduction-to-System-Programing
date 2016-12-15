#include <stdio.h>
void swap(int *p,int *q){
  int tem = *p;
  *p=*q;
  *q=tem;
}

int main(void){
  int i=1,j=5;
  int *p,*q;
  p=&i;
  q=&j;
  swap(p,q);
  printf("p %d q %d \n",*p,*q);
  return 0;
}
