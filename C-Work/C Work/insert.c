/* 插入：有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中 */

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
	printf("插入后的序列：\n");
	for (int i = 0; i < L.Last + 1; i++)
		printf("%d ", L.a[i]);
	
	system("\npause");
	return 0;
}

void insert(LNode *L, int x) {
	int location=0; /* location为插入位置 */
	if (L->Last == MAX - 1) {
		printf("表满！");
		return;
	}
	if (L->a[0] <= L->a[L->Last]) {  /*若原序列为升序排列*/
		for (int i = 0; i < L->Last + 1; i++) {
			if (x > L->a[i]) location++;
			else break;
		}
	}
	else { /*若为降序排列*/
		for (int i = 0; i < L->Last + 1; i++) {
			if (x < L->a[i]) location++;
			else break;
		}
	}

	/*从后往前，依次往后挪一位，给插入元素腾出位置*/
	for (int i = L->Last; i >= location; i--) {
		L->a[i + 1] = L->a[i];
		if (i == location) L->a[location] = x;
	}
	L->Last++;
}