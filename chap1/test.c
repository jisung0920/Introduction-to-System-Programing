#include <stdio.h>

int main(void){
	int a=10;
	int b;
	a=10+(a++);
	b=a;
	printf("%d",b);
}
