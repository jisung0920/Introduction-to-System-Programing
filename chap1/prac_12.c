#include <stdio.h>
#include <math.h>
int main(void){
	int a=1,b=2,c=3;

	printf(":::::: A TABLE OF POWERS ::::::\n");
	printf("Interger	Square	3rd Power	4th Power	5th Power\n");
	printf("--------	------	---------	---------	---------\n");
	printf("	  %d		%d		   %d		   %d 		   %d\n",a,pow(a,2),pow(a,3),pow(a,4),pow(a,5));	
	printf("	  %d		%d		   %d		   %d 		   %d\n",b,pow(b,2),pow(b,3),pow(b,4),pow(b,5));
	printf("	  %d		%d		   %d		   %d 		   %d\n",c,pow(c,2),pow(c,3),pow(c,4),pow(c,5));
	return 0;
}
