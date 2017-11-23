/* 输出杨辉三角前十行*/
#include <stdio.h>
#define ROW 10
#define COL 10

int main() {
	int i, j;
	int a[ROW][COL] = { 0 };
	
	for (i = 0; i < ROW; i++) { /*先将第一列和对角线元素赋值为1*/
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for(i = 2; i < ROW; i++){/*从第三行开始处理*/
		for (j = 1; j < i; j++) /* 每行从第二列开始， 到第i列结束*/
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	}
	/*输出结果*/
	printf("杨辉三角：\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getchar();
}