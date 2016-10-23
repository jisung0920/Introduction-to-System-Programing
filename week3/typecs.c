#include <stdio.h>

int main(int argc, char const* argv[])
{
	printf("the size of some fundamental types is computed\n\n");
	printf("char: %3lu bytes \n",sizeof(char));
	printf("short: %3lu bytes \n",sizeof(short));
	printf("int: %3lu bytes \n",sizeof(int));
	printf("long: %3lu bytes \n",sizeof(long));
	printf("unsigned%3lu bytes \n",sizeof(unsigned));
	printf("float: %3lu bytes \n",sizeof(float));
	printf("double: %3lu bytes \n",sizeof(double));
	printf("long double: %3lu bytes \n",sizeof(long double));
	return 0;
}
