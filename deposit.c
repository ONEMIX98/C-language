#include <stdio.h>
#include <math.h>
#define SAV 1000.0
#define r1  0.0414 
#define r2  0.0468
#define r3  0.054
#define r5  0.0585 
#define rr  0.0072
void func1(double s)
{
	printf("Sum: %f\n", s*(1+5*r5));
}
void func2(double s)
{
	printf("Sum: %f\n", s*(1+2*r2)*(1+3*r3));
}
void func3(double s)
{
	printf("Sum: %f\n", s*(1+3*r3)*(1+2*r2));
}
void func4(double s)
{
	printf("Sum: %f\n", s*pow(1+r1,5));
}
void func5(double s)
{
	printf("Sum: %f\n", s*pow(1+rr/4, 4*5));
}

int main(int argc, char const *argv[])
{
	
	int menu;
	printf("Choose your saving strategy: (1-5)\n");
	scanf("%d", &menu);

	switch(menu)
	{
		case 1: func1(SAV); break;
		case 2: func2(SAV); break;
		case 3: func3(SAV); break;
		case 4: func4(SAV); break;
		case 5: func5(SAV); break;
		default: printf("Error data!\n");
	}
	return 0;
}

