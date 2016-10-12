#include <stdio.h>
int main(int arg,char *argv[])
{
	int i=0;
	FILE *ifp;
	ifp = fopen(argv[1],"r");
	double x;
	double avg =0.0;
	double navg;
	double sum =0.0;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n","Count","Item","Average","Naive avg","----","----","-------","---------");
	while(fscanf(ifp,"%lf",&x)!=EOF){
		i++;
		avg+=(x-avg)/i;
		sum+=x;
		navg=sum/i;
		printf("%5d%17e%17e%17e\n",i,x,avg,navg);}
	return 0;
}
