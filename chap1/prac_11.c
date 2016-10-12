#include <stdio.h>

int main(void){
	int age;
	char name[10];
	scanf("%s\n",name);
	scanf("%d",&age);

	printf("Hello %s, next year you will be %d",name,age+1);
}
