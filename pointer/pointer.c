#include <stdio.h>

int main(void){
  int a=10,b=20,c=30;
  int* pa[3]={NULL,NULL,NULL};
  pa[0]=&a;
  pa[1]=&b;
  pa[2]=&c;
  printf("%d %d %d \n",*((*(pa+0))+1),*pa[1],*pa[2]);

  printf("%x %x %x\n",pa[0],pa[1],pa[2]);
  printf("%x %x %x \n",*pa,*(pa+1),*(pa+2));
  int ar[2][3]={40,50,60,70,80,90};
  int (*ap)[3]=NULL;
  ap=ar;

  printf("%x %x %x \n",ap[0],ap[1],ap[2]);
  printf("%x %x %x \n",*(ap[0])+1,(*ap[1]),*ap[3]);
  return 0;
}
