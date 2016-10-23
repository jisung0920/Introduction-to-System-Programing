/* Print Fibonacci numbers snf quotients. */
#include <stdio.h>
#define 	LIMIT	46
int main(void)
{
	long f0 = 0, f1 = 1, n, temp;
	printf("%7s%19s%29s\n%7s%19s%29s\n%7s%19s%29s\n",
		/* headings */
		"  ", "Fibonacci", "Fibonacci",
		" n", "  numbers", " quotient",
		"--", "---------", "---------");
	printf("%7d%19d\n%7d%19d\n", 0, 0, 1, 1); /* 1st 2 cases */
	for (n = 0; n <= LIMIT; ++n) {
		temp = f1;
		f1 += f0;
		f0 = temp;
		printf("%71d%19ld%29.16f\n", n, f1, (double) f1 / f0);
	}
	return 0;
}