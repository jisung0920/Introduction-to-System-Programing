#include <stdio.h>

int max(int);
int min(int);
int maxcount;
int mincount;

int main(int argc, char const *argv[]){
	int i;
	for(i=0;i<15;i++)
		max(i);
	for(i=20;i>1;i--){
		min(i);
	}
	printf("max() called %d times, maxval : %d\n",maxcount,max(5));
	printf("min() called %d times, minval : %d\n",mincount,min(10));
	return 0;
}

int max(int x){
	static int max;
	if(max<x)
		max=x;
	maxcount++;

	return max;
}

int min(int x){
	static int min=10;
	if(min>x)
		min=x;
	mincount++;

	return min;
}
