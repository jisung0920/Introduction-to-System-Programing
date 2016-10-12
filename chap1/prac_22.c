#include <stdio.h>
#include <ctype.h>
#define MAX 100
int main(int arg,char *argv[]){
	char c,name[MAX];
	int i,sum=0;
	FILE *ifp;
	ifp = fopen(argv[1],"r");

	while(c=putc()!= EOF){

		name[i]=c;
		if(isalpha(c))
			sum +=c;
	}

	printf("\n%s%s%s\n%s",
			"Nice to meet you",name,".",
			"Your name spelled backwards is");
	for(--i;i>=0;--i)
		putchar(name[i]);
	printf("\n%s%d%s\n\n%s\n",
			"and the letters in your name sum to",sum,".",
			"Have a nice day!");
	return 0;
}
		
