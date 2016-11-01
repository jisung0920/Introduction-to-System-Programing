#include "pgm.h"

int main(void){
	char ans;
	int i, n=N;
	scanf("%c",&ans);
	if(ans=='y'||ans=='Y')
		wrt_info("pgm");
	for(i=0;i<n;++i)
		fct1(i);
	printf("bye");
	return 0;
}
