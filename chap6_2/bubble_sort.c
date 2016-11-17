#include <stdio.h>
#define N 16

void bubble(int a[],int n);
void swap(int*,int*);
void print_array(int *a, int n);

int main(void){

  int key[] = {4,3,1,67,55,8,0,4,-5,37,7,4,2,9,1,-1};

  printf("\n   Before Insertion Sort :\n\n");
	for(int j= 0; j < N; ++j)
		printf("%4d",key[j]);
	printf("\n\n");

  bubble(key,N);

  printf("\n   After Insertion Sort :\n\n");
  for(int j = 0; j < N; ++j)
    printf("%4d",key[j]);
  printf("\n\n");

  return 0;
}

void bubble(int a[],int n){
  int i,j;
  for(i=0;i<n-1;i++)
    for(j=n-1;j>i;--j)
      if(a[j-1]>a[j]){

        swap(&a[j-1],&a[j]);
        print_array(a,n);
      }
}

void swap(int *a, int *b){

	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_array(int *a, int n){
	for(int i = 0; i < n; ++i)
		printf("%5d", a[i]);
	putchar('\n');
}
