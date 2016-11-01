#include "pgm.h"

void fct1(int n){
	int i;
	printf("fc1()\n");
	for(i=0;i<n;++i)
		fct2();
}

void fct2(void){
	printf("fct2()\n");
}
