#include <stdio.h>
#define MAX 10
int main() {
	printf("%70s\n\n", "/*选择排序法对10个整数排序*/");

	int a[MAX] = { 5, 10, 6, 4, 3, 8, 8, 9, 1, 2 };
	int k, i, j;
	int temp;

	for (i = 0; i < MAX - 1; i++) {
		k = i; /*k 用于选择出最小值的位置*/
		for (j = i + 1; j < MAX; j++) {
			if (a[k] > a[j]) {
				k = j;
			}
		}
		if (k != i) { /*每轮大循环都要判断选择数k是否改变*/

			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	
	for (i = 0; i < MAX; i++)
		printf("%d ", a[i]);
	getchar();
	return 0;
}