#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int*,int);
int sum_array(int*,int);
void wrt_array(int*,int);

int main(void){
  int *a,n;
  srand(time(NULL));
  while(1){
    printf("input n: ");
    if(scanf("%d",&n)!=1 || n<1)
      break;//입력
    putchar('\n');
    a = calloc(n,sizeof(int));//a에 int size n개를 할당
    fill_array(a,n);
    wrt_array(a,n);
    printf("Sum = %d\n",sum_array(a,n) );
    free(a);//할당된 메모리를 해제한다.
  }
  return 0;
}

void fill_array(int *a,int n){
  int i;
  for(i=0;i<n;i++)
    a[i]=rand()%19-9;//a에 직접 접근하여 (가리키는)값을 바꾼다.
}
int sum_array(int *a,int n ){
  int i,sum=0;
  for(i=0;i<n;i++)
    sum+=a[i];
  return sum;
}
void wrt_array(int *a,int n){
  int i;
  for(i=0;i<n;i++)
    printf("%d",a[i]);
}
