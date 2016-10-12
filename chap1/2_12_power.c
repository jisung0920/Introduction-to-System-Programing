#include <stdio.h>

int main(void){
	int i=0,power=1;

	while(++i<=30){
		printf("%-6d",power*=2);
//		printf("\n");
	}
	return 0;
}

