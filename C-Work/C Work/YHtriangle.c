/* ����������ǰʮ��*/
#include <stdio.h>
#define ROW 10
#define COL 10

int main() {
	int i, j;
	int a[ROW][COL] = { 0 };
	
	for (i = 0; i < ROW; i++) { /*�Ƚ���һ�кͶԽ���Ԫ�ظ�ֵΪ1*/
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for(i = 2; i < ROW; i++){/*�ӵ����п�ʼ����*/
		for (j = 1; j < i; j++) /* ÿ�дӵڶ��п�ʼ�� ����i�н���*/
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	}
	/*������*/
	printf("������ǣ�\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getchar();
}