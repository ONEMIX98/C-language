#include <stdio.h>
#define MAX 101
int main() {
	printf("%70s\n\n", "/*��ɸѡ����100���ڵ�����*/");
	
	int i, j;
	int a[MAX];
	for (i = 2; i <= MAX - 1; i++) {
		a[i] = i;
	}
	for (i = 2; i <= sqrt(MAX - 1); i++)
		for (j = i + 1; j <= MAX - 1; j++)
			if (a[i] != 0 && a[j] != 0 && a[j] % a[i] == 0)
				a[j] = 0;
	
	for (i = 2; i < MAX - 1; i++)
		if (a[i] != 0)
			printf("%7d ", a[i]);
	getchar();
	
	return 0;
}
