#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char*);

int main(int argc, char const *argv[]){
	char str[] = "abcdefghijklmonpqrstuvwxyz";
	printf("%s\n",reverse(str));
	return 0;
}


char* reverse(char* s){
	int a = strlen(s);
	char* st = (char*)malloc(a);
	for(int i=a-1,j=0;i>-1;i--,j++)
		*(st+j)=s[i];
	*(st+a)='\0';
	return st;
}


