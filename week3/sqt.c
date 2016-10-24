#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float mSqrt(float);

int main(void){
	int n;
	printf("input N : ");
	scanf("%d",&n);

	printf(" computer : %.20lf	 My_sqrt : %.20lf
			 n1 : %.20lf
			 n2 : %.20lf",sqrt(n),mSqrt(n),sqrt(n)*sqrt(n),mSqrt(n)*mSqrt(n));
	 
	return 0;
}

float mSqrt(float n){
	int i=0;
	float tmp=n;
	do{
		tmp/=2;
	}
	while(tmp*tmp>n);

	while(i<10000)
		tmp=(tmp+(1/tmp))/2;

	return tmp;
}

