#include <stdio.h>

int main(void){
  double *p,*q;
  double a[2]={4.5,9.0};
  p=a;
  q=p+1;//q = a[1] 이다.
  printf("%d\n",q-p );//포인터의 논리적 차이는 1이다.
  printf("%d\n",(int)q-(int)p );//포인터의 주소의 물리적 차이는 8이다(double type은 크기가 8)
  printf("%lf\n",*q-*p );
  return 0;
}
