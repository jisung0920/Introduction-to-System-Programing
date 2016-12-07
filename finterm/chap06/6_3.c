#include <stdio.h>
void swap(int *p, int *q);
int main(void){
  int i=3;
  int j=2;
  swap(&i,&j);

  printf("i = %d  j =%d",i,j);

}

void swap(int *p, int *q){
  int temp = *p;
  *p = *q; //주소를 가리키는 포인터를 바꾼다.
  *q =temp;
}
