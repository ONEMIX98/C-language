#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
	double r;
	int h;
	printf("input r:\n");
	scanf("%lf", &r);
	printf("input h:\n");
	scanf("%d", &h);

	double c, s1, s2, v1, v2;
	c = 2*PI*r;
	s1 = PI*r*r;
	s2 = 4*PI*r*r;
	v1 = (4.0/3.0) * PI * r *r *r;
	v2 = s1*h;
	printf("C=%.2f, S1=%.2f, S2=%.2f, V1=%.2f, V2=%.2f\n", c, s1, s2, v1, v2);
	return 0;
}
