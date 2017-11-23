/*找出二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小。也可能没有鞍点*/

#include <stdio.h>
#define ROW 3
#define COL  3
int findsadpt(float *sadpt, float array[ROW][COL], int end);
int main() {
	float array[ROW][COL] = { 8,1,8,3,5,7,4,9,7 };
	float sadpt[ROW]; // 鞍点最大数目为行、列数中小者
	int end = -1; /* end 指向sadpt数组最后一个有效值的位置 */
	int i;
	
	findsadpt(sadpt, array, end);
	/*存在数组里，统一打印*/
	/*if ((end = findsadpt(sadpt, array, end)) != -1) {
		printf("end = %d\n", end);
		for (i = 0; i <=end; i++ )
			printf("Saddle points: %.0f ", sadpt[i]);
	}
	else printf("No saddle point!\n");*/
	getchar();
	return 0;
}

int findsadpt(float *sadpt, float array[ROW][COL], int end) {
	int i, j, k, maxj, flag = 1; /*maxj为每行最大值所在列*/
	float max;

	for (i = 0; i < ROW; i++) { /*找到每一行的最大者*/
		max = array[i][0];
		maxj = 0;
		for (j = 0; j < COL; j++) {
			if (max < array[i][j]) {
				max = array[i][j];
				maxj = j;
			}
		}
		flag = 1;
		for (k = 0; k < ROW; k++) { /*检验该行最大值是否为所在列最小值*/
			/*printf("max = %.0f, array[k][maxj] = %.0f\n", max, array[k][maxj]);*/
			if (max > array[k][maxj]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			sadpt[++end] = array[i][maxj];
			printf("Saddle point%d: array[%d][%d] = %.0f ", end + 1, i , maxj, sadpt[end]);
		}
	}
	
	return end;
}