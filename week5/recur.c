#include <stdio.h>

void recursiveFun_1(int num){
	printf("recusive Function 1 : %d\n",num);
	if(num<10)
		recursiveFun_1(num+1);
}

void recursiveFun_2(int num){
	if(num<10)
		recursiveFun_2(num+1);

	printf("recusive Function 2 : %d\n",num);
}

int main(int argc,char cont *argv[]){
	recursiveFun_1(1);
	printf("\n");
	recursiveFun_2(1);
	return 0;
}
