/*职工系统：
1. 输入10个职工信息（姓名和职工号);
2. 按职工号排序；
3. 通过输入的职工号输出对应职工姓名。*/

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
	char num[MAX]; /*用于输入查找职工号的字符串*/
	int i;
	input();
	sort();
	for ( i = 0; i < persons; i++) {
		printf("%s %s\n", staff[i].id, staff[i].name);

	}
	printf("输入你要查找职工的职工号：");
	scanf_s("%s", num, MAX);
	getchar();
	if ((i = find(num))!=-1) {
		printf("%s", staff[i].name);
	}
	else printf("没有找到！");
	
	getchar();
}

void input() {
	printf("输入%d个职工的职工号和姓名，工号和姓名用空格隔开，各职工之间回车相隔：\n", persons);
	for (int i = 0; i < persons; i++) {
		scanf_s("%s %s", staff[i].id, MAX, staff[i].name, MAX);
	}
}
/*选择排序法将结构数组排序*/
void sort() {
	int i, j, k;
	for (i = 0; i < persons-1; i++) {
		k = i;
		for (j = i + 1; j < persons; j++) {
			if (strcmp(staff[k].id, staff[j].id) > 0) k = j;
		}
		if (i != k) {
			/*交换两个结构数组中的字符串*/
			temp = staff[i];
			staff[i] = staff[k];
			staff[k] = temp;
		}
	}
}
/*找到指定字符串在结构数组中的位置*/
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