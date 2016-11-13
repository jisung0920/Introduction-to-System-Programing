#include <stdio.h>

int main(void){
	int *p;
	int a=2,b;
	p=&a;
	printf("p = %p, %d\n",p,*p);
	b=*p;
	printf("b = %d\n",b);
	a++;
	printf("b = %d\n",b);
	(*p)++;
	printf("p = %p, p* = %d , a = %d , b = %d",p,*p,a,b);
	return 0;
}
