#include <stdio.h>
int main(void){
	int k;
	int result;
	printf("Eenter the level of times table : ");
	scanf("%d",&k);

	/* code here */

	for(int i=1;i<k+1;i++)
		printf("%d * %d = %d\n",k,i,k*i);
	return 0;
}
