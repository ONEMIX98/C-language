#include <stdio.h>
#define MAX 100
typedef struct LNode
{
	int a[MAX];
	int Last; /* Lastָ�����һ��Ԫ�أ���ֵΪ���һ��Ԫ�ص��±꣩ */
}LNode;

void reverse(LNode *L);
int main() {
	LNode L = { {8,6,5,4,1}, 4 };
	printf("ԭ����:\n");
	for (int i = 0; i < L.Last + 1; i++)
		printf("%d", L.a[i]);
	reverse(&L);
	printf("\n�����:\n");
	for(int i = 0; i < L.Last + 1; i++)
		printf("%d", L.a[i]);

	getchar();
}
void reverse(LNode *L) {
	int temp;
	for (int i = 0; i <= (L->Last / 2); i++)
	{
		temp = L->a[i];
		L->a[i] = L->a[L->Last - i];
		L->a[L->Last - i] = temp;

	}
}