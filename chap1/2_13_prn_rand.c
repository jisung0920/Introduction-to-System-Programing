#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int i,n;

	srand(time(NULL));
	printf("intput :");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		if(i%8==0)
			putchar('\n');
		printf("%15d",rand());
	}
	printf("\n\n");
	return 0;
}
