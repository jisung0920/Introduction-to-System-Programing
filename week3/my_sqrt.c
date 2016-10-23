#include <stdio.h>
#include <math.h>

double my_sqrt(double number){
	double result;
	result = number;


	while((result*result<number)&&result>number*(0.5))
		result=result/2;
		

	int i=1;
	
	while(i++<10000)
		result=(0.5)*(result+number/result);

	return result;
}

int main(int argc, char const* argv[]){
	double integer;
	printf("Tell me Non-negative number X :");
	scanf("%lf",&integer);
	printf("\n sqrt(x)= %10lf, sqrt(x)^2 = %.30e\n"
			"my_sqrt(x)= %10lf, my_sqrt(x)^2 = %.30e\n",
			sqrt(integer),sqrt(integer)*sqrt(integer),
			my_sqrt(integer),my_sqrt(integer)*my_sqrt(integer));
	return 0;

}
