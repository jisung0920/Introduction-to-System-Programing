#include <stdio.h>
int gcd(int a, int b){

	int c;
	int result;
	while(1){
		if(a==0 || b==0){
			return 0;
		}
		if(a<b){
			c= b%a;
			result = a;
			b=c;
		}
		else{
			c= a%b;
			result = b;
			a=c;
		}
		if(!c)
			return result;
	}
	/* code here*/
	
}
int main(void){
	printf("gcd(10,15) = %d\n", gcd(10,15));			//result : 5
	printf("gcd(125,13) = %d\n", gcd(125,13));			//result : 1
	printf("gcd(625,225) = %d\n", gcd(625,225));		//result : 25
	printf("gcd(6840,324) = %d\n", gcd(6840,324));		//result : 36
	return 0;
}
