#include "hanoi.h"

int get_n_from_user(void){
	int n;
	printf("input number:");
	if(scanf("%d",&n) != 1 || n <1){
		printf("\nERROR");
	}
	printf("\n");
	return n;
}
