#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	int *space = (int*)malloc(sizeof(int)*5);

	for(i=0;i<5;i++){
		*(space +i) = i;
		printf("%d \n",space[i]);
	}
	free(space);
	return 0;
}
		
