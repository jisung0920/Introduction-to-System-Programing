#include <stdio.h>
int main(void){
		int i,j,k;
		printf("Christmas tree. How large? ");
		scanf("%d",&k);

		/* code here */
		for(int i=0;i<k;i++){
			for(int j=1;j<(k-i);j++)
				printf(" ");
			for(int j=0;j<(i*2)+1;j++)
				printf("*");

			printf("\n");
		}
		return 0;
}
