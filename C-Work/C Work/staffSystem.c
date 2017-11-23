#include<stdio.h>
#include<string.h>
#define persons 3
struct Member {
	char name[20];
	char id[20];
}staff[persons];

void input();
void sort();
int find(char *num);

void main() {
	char *num;
	input();
	sort();
	printf("输入你要查找职工的职工号：");
	gets(num);
	printf("%s", staff[find(num)].name);

	getchar();
}

void input() {
	printf("输入%d个职工的姓名和职工号，姓名和工号用空格隔开，各职工之间回车相隔：\n", persons);
	for (int i = 0; i < persons; i++) {
		scanf_s("%s %s", staff[i].name, staff[i].id);
	}
}
void sort() {
	int i, j, k;
	char temp[20];
	for (i = 0; i < persons-1; i++) {
		k = i;
		for (j = i + 1; i < persons; j++) {
			if (strcmp(staff[i].id, staff[j].id) > 0) k = j;
		}
		if (i != k) {
			strcpy(temp, staff[i].id);
			strcpy(staff[i].id, staff[j].id);
			strcpy(staff[j].id, temp);
		}
	}
}