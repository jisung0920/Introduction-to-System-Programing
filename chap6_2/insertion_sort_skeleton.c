/*
      [1] Pass the Argument, when executing the main executable

	./a.out 444 5 -900 03 000 2 93 4 -123 5 1 3 2

	not to compile several times, using main arguments or using scanf is better.

      [2] Use atoi()

	int atoi(char const *str);
	in 'stdlib.h'
	changes String to Integer

      [3] Insertion sort algorithm

*/

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *, int);
void swap(int *, int *);
void print_array(int *, int);

int main(int argc, char const* argv[]){
	int a[argc-1];
	for (int i = 1; i < argc; i++){
		a[i-1] = atoi(argv[i]);
	}
	int n = sizeof(a)/sizeof(int);

	insertion_sort(a,n);

	printf("\n   After Insertion Sort :\n\n");
	for(int j = 0; j < n; ++j)
		printf("%5d",a[j]);
	printf("\n\n");
	return 0;
}

void insertion_sort(int a[], int n){

	for(int i=1;i<n;i++){
			printf("===============%d place\n",i);
			for(int j=0;j<i;j++){
				if(a[i]<a[j]){
					printf("insert %d to idx %d\n",a[i],j);
					for(int k=i;k>j;k--){
							printf("swap %d %d\n",a[k],a[k-1]);
							swap(&(a[k]),&(a[k-1]));
							print_array(a,n);
					}

					break;
				}

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
