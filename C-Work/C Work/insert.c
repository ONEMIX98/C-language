/* ���룺��һ�����ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ������������� */

#include <stdio.h>
#define MAX 100
typedef struct LNode
{
	int a[MAX];
	int Last;
}LNode;

void insert(LNode *L, int x);

int main() {
	LNode L = { {8,4,3}, 2 };
	int x;
	printf("The array:\n");
	for (int i = 0; i < L.Last+1; i++)
		printf("%d ", L.a[i]);
	printf("\nInsert a number x to the array: ");
	scanf_s("%d", &x);

	insert(&L, x);
	printf("���������У�\n");
	for (int i = 0; i < L.Last + 1; i++)
		printf("%d ", L.a[i]);
	
	system("\npause");
	return 0;
}

void insert(LNode *L, int x) {
	int location=0; /* locationΪ����λ�� */
	if (L->Last == MAX - 1) {
		printf("������");
		return;
	}
	if (L->a[0] <= L->a[L->Last]) {  /*��ԭ����Ϊ��������*/
		for (int i = 0; i < L->Last + 1; i++) {
			if (x > L->a[i]) location++;
			else break;
		}
	}
	else { /*��Ϊ��������*/
		for (int i = 0; i < L->Last + 1; i++) {
			if (x < L->a[i]) location++;
			else break;
		}
	}

	/*�Ӻ���ǰ����������Ųһλ��������Ԫ���ڳ�λ��*/
	for (int i = L->Last; i >= location; i--) {
		L->a[i + 1] = L->a[i];
		if (i == location) L->a[location] = x;
	}
	L->Last++;
}