#include "find_root.h"

int cnt =0;
const dbl eps= 1e-13;

int main(void){
  dbl a = -10.0;
  dbl b = +10.0;
  dbl root;
  assert(f(a)*f(b)<=0.0);
  root = bisection(f,a,b);
  printf("No of fct callls : %d \nApproximate root : %.15f\nFucntion value : %.15f\n",cnt,root,f(root) );

}
