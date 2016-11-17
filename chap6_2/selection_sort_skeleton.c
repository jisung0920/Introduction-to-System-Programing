/*
      [1] Pass the Argument, when executing the main executable

	./a.out 444 5 -900 03 000 2 93 4 -123 5 1 3 2

	not to compile several times, using main arguments or using scanf is better.

      [2] Use atoi()

	int atoi(char const *str);
	in 'stdlib.h'
	changes String to Integer

      [3] Selection sort algorithm

*/

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *, int);
void swap(int *, int *);
void print_array(int *, int);

int main(int argc, char const* argv[]){
	int a[argc-1];
	for (int i = 1; i < argc; i++){
		a[i-1] = atoi(argv[i]);
	}
	int n = sizeof(a)/sizeof(int);

	selection_sort(a,n);

	printf("\n   After Selection Sort :\n\n");
	for(int j = 0; j < n; ++j)
		printf("%5d",a[j]);
	printf("\n\n");
	return 0;
}

void selection_sort(int a[], int n){

	int tmp,idx=0,i,j;

	for(i=0;i<n-1;i++){
		tmp =a[i];
		for(j=i;j<n;j++){
			if(tmp>a[j]){
				tmp=a[j];
				idx=j;
			}
		}
		if(a[i]!=a[idx]){
			printf("swap %d, %d \n",a[i],a[idx] );
			swap(&a[i],&a[idx]);
			for(int j = 0; j < n; ++j)
				printf("%5d",a[j]);
			printf("\n\n");
		}

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
