#include <stdio.h>
#define RATE 0.09
int main(int argc, char const *argv[])
{
	/* code */
	double p = 1.0;
	int n = 10;
	double m = 1+RATE;
	int i;
	for (i = 0; i<n; i++)
	{
		p = p * m;
	}
	printf("%f\n", p);
	return 0;
}
