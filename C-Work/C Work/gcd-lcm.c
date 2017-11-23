/* 求两个整数的最大公约数（辗转相除法）和最小公倍数（两数乘积/最大公约数）*/

#include <stdio.h>
int fgcd(int a, int b);
int flcm(int a, int b);
int main() {
	int x1, x2;
	int gcd, lcm;
	scanf_s("%d %d", &x1, &x2);
	if (x1 < x2) {
		int temp;
		temp = x1;
		x1 = x2;
		x2 = temp;
	}

	gcd = fgcd(x1, x2);
	lcm = flcm(x1, x2);
	printf("最大公约数：%d; 最小公倍数：%d\n", gcd, lcm);
	getchar();
	getchar();

	return 0;
}

int fgcd(int a, int b) {
	int r; /* 余数 */
	while ((r = a%b) != 0) { /*辗转相除，除尽为止*/
		a = b;
		b = r;
	}
	return b;
}
int flcm(int a, int b) {
	return a*b / fgcd(a, b); /*最小公倍数 = 两数之积/最大公约数*/
}

