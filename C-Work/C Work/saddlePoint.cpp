/*�ҳ���ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С��Ҳ����û�а���*/

#include <stdio.h>
#define ROW 3
#define COL  3
int findsadpt(float *sadpt, float array[ROW][COL], int end);
int main() {
	float array[ROW][COL] = { 8,1,8,3,5,7,4,9,7 };
	float sadpt[ROW]; // ���������ĿΪ�С�������С��
	int end = -1; /* end ָ��sadpt�������һ����Чֵ��λ�� */
	int i;
	
	findsadpt(sadpt, array, end);
	/*���������ͳһ��ӡ*/
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
	int i, j, k, maxj, flag = 1; /*maxjΪÿ�����ֵ������*/
	float max;

	for (i = 0; i < ROW; i++) { /*�ҵ�ÿһ�е������*/
		max = array[i][0];
		maxj = 0;
		for (j = 0; j < COL; j++) {
			if (max < array[i][j]) {
				max = array[i][j];
				maxj = j;
			}
		}
		flag = 1;
		for (k = 0; k < ROW; k++) { /*����������ֵ�Ƿ�Ϊ��������Сֵ*/
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