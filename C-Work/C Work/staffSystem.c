/*ְ��ϵͳ��
1. ����10��ְ����Ϣ��������ְ����);
2. ��ְ��������
3. ͨ�������ְ���������Ӧְ��������*/

#include<stdio.h>
#include<string.h>
#define persons 10
#define MAX 20
struct Member {
	char name[MAX];
	char id[MAX];
}staff[persons], temp;

void input();
void sort();
int find(char *num);
void swap(char *a, char *b);

void main() {
	char num[MAX]; /*�����������ְ���ŵ��ַ���*/
	int i;
	input();
	sort();
	for ( i = 0; i < persons; i++) {
		printf("%s %s\n", staff[i].id, staff[i].name);

	}
	printf("������Ҫ����ְ����ְ���ţ�");
	scanf_s("%s", num, MAX);
	getchar();
	if ((i = find(num))!=-1) {
		printf("%s", staff[i].name);
	}
	else printf("û���ҵ���");
	
	getchar();
}

void input() {
	printf("����%d��ְ����ְ���ź����������ź������ÿո��������ְ��֮��س������\n", persons);
	for (int i = 0; i < persons; i++) {
		scanf_s("%s %s", staff[i].id, MAX, staff[i].name, MAX);
	}
}
/*ѡ�����򷨽��ṹ��������*/
void sort() {
	int i, j, k;
	for (i = 0; i < persons-1; i++) {
		k = i;
		for (j = i + 1; j < persons; j++) {
			if (strcmp(staff[k].id, staff[j].id) > 0) k = j;
		}
		if (i != k) {
			/*���������ṹ�����е��ַ���*/
			temp = staff[i];
			staff[i] = staff[k];
			staff[k] = temp;
		}
	}
}
/*�ҵ�ָ���ַ����ڽṹ�����е�λ��*/
int find(char *num) {
	int left, mid, right;
	left = 0;
	right = persons-1;
	
	while (left <= right) {
		mid = (left + right) / 2;
		if (strcmp(num, staff[mid].id) > 0) left = mid + 1;
		else if (strcmp(num, staff[mid].id) < 0) right = mid - 1;
		else return mid;
	}
	return -1;
} 