#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* concat(char*, char*);

int main(int argc, char const *argv[]){
	char* a ="Hello,";
	char* b ="World!";
	char* string = concat(a,b);
	printf("%s\n",string);
	return 0;
}

char* concat(char* a, char* b){
	int ai=strlen(a);
	int bi=strlen(b);

	char* str =(char*)malloc(ai+bi+1);
	for(int i=0;i<ai;i++)
		*(str+i)=a[i];
	for(int i=0;i<bi;i++)
		*(str+ai+i)=b[i];
	*(str+ai+bi)='\0';
	return str;
}
