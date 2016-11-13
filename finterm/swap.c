#include <stdio.h>

void swap(int *p,int *q){
	int tmp;
	tmp = *p;
	*p=*q;
	*q=tmp;
}
void swap2(int *p,int*q){
	int *tmp;
	tmp=p;
	p=q;
	q=tmp;
}//p,q의 값(주소)만 변경한 것이라 인자가 교환되지 않는다.


int main(void){
	int i=3,j=5;
	swap(&i,&j);
	printf("%d %d\n",i,j);
	swap2(&i,&j);
	printf("%d %d\n",i,j);
	return 0 ;
}
