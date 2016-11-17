#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define KEYSIZE 16

void mergesort(int*,int);
void merge(int*,int*,int*,int,int);
void print_array(char *,int *,int);

int main(void)
{
	int i, key[] = {4,3,1,67,55,8,0,4,-5,37,7,4,2,9,1,-1};

	print_array("before mergesort",key,KEYSIZE);
	mergesort(key,KEYSIZE);
	print_array("after mergesort",key,KEYSIZE);
	return 0;
}
void mergesort(int key[],int n){
	int j,k,m,*w;
	for(m=1;m<n;m*=2)
	;
	if(m!=n){
		printf("Error: Size of the array is not a power of 2\n");
		exit(1);
	}
	w=calloc(n,sizeof(int));
	assert(w!=NULL);
	for(k=1;k<n;k*=2){
		for(j=0;j<n-k;j+=2*k)
			merge(key+j,key+j+k,w+j,k,k);
		for(j=0;j<n;++j)
			key[j]=w[j];
		print_array("intermediate : ",key,KEYSIZE);
	}
	free(w);
}
void merge(int*,int*,int*,int,int);
void print_array(char *,int *,int);
