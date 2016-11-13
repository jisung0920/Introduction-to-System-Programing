#include "hanoi.h"

int get_n_from_user(void){
	int n;
	if(scanf("%d",&n)!=1 || n<1){
		printf("input error\n");
		exit(1);
	}
	putchar('\n');
	return n;
}
