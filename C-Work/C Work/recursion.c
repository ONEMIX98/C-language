/*递归求n阶勒让德多项式的值*/

#include <stdio.h>
float poly(int n, float x);

void main() {
	int n;
	float x;
	scanf_s("%d %f",&n, &x);
	printf("%d阶勒让德多项式在 x = %.2f 的值为：%.2f\n", n, x, poly(n,x));
	getchar();
	getchar();
}
float poly(int n,float x) {
	float ret;
	if (n == 0) return 1;
	if (n == 1) return x;
	ret = ((2 * n - 1)*x - poly(n - 1, x) - (n - 1)*poly(n - 2, x)) / n;
	return ret;
}