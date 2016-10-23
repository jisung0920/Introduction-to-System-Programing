#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i,n,seed;

	seed = time(NULL);
	srand(seed);
	
	printf("\n%s\n%s","Some randomly distributed integers will be printed."
			,"How many do you want to see?");

	scanf("%d",&n);

	for(i=0;i<n;i++)
		printf("%d num  = %12d\n",i+1,rand());
				
	return 0;
}
