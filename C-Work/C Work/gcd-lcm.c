/* ���������������Լ����շת�����������С�������������˻�/���Լ����*/

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
	printf("���Լ����%d; ��С��������%d\n", gcd, lcm);
	getchar();
	getchar();

	return 0;
}

int fgcd(int a, int b) {
	int r; /* ���� */
	while ((r = a%b) != 0) { /*շת���������Ϊֹ*/
		a = b;
		b = r;
	}
	return b;
}
int flcm(int a, int b) {
	return a*b / fgcd(a, b); /*��С������ = ����֮��/���Լ��*/
}

