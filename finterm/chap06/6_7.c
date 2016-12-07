#include <stdio.h>
void swap(int *p,int *q){
	int tmp;
	tmp = *p;
	*p=*q;
	*q=tmp;
}

void bubble(int a[],int n){
  int i,j;
  for(i=0;i<n-1;++i)
    for(j=n-1;j>i;--j)
      if(a[j-1]>a[j])
        swap(&a[j-1],&a[j]);
}

int main(void){
  int a[]={1,5,4,7,6,34,-4,45,3,2};
  bubble(a,10);
  for(int i=0;i<10;i++)
    printf("%d ",a[i]);
  putchar('\n');
}
