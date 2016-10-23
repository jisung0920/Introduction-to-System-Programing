#include <stdio.h>
#include <math.h>

int main(void){
	double x;
	
	while(1){
		printf("input x:");
		if(scanf("%lf",&x)!= 1)
			break;
		if(x>=0.0){
			printf("\n %15s %22.15e\n"
					"%15s %22.15e \n"
					"%15s %22.15e \n",
					"x= ",x,
					"sqrt(x)=",sqrt(x)
					,"pow(x,x)=",pow(x,x));
		}

		else{
			printf("\nSorry your number must be nonnegative\n");
			break;
		}
	}

	return 0;
}
