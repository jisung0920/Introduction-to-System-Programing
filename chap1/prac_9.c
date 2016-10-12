#include <stdio.h>
#define BOT "\n\n\n\n\n"
#define HEI 17
#define OFF "                 "
#define TOP "\n\n\n\n\n"

int main(void){
	int i;
	printf(TOP);
	printf(OFF"IIIIIII\n");
	for(i=0;i<HEI;++i)
		printf(OFF"  III\n");
	printf(OFF"IIIIIII\n");
	printf(BOT);
	return 0;
}
