/*ͳ���ַ�������ĸ�����֡��ո�������ַ��ĸ���*/

#include <stdio.h>
#include <ctype.h>
#define MAX 100 
void countchar(char *s, int *result);
void main() {
	char s[MAX];
	int result[4] = { 0 };
	gets(s);
	countchar(s, result);

	printf("��ĸ��%d, ���֣�%d, �ո�%d, �����ַ���%d", result[0], result[1], result[2], result[3]);
	getchar();
}

void countchar(char *s, int *result) {
	char c;
	for (; (c = *s) != '\0'; s++) {
		if (isalpha(c)) result[0]++;
		else if (isdigit(c)) result[1]++;
		else if (isspace(c)) result[2]++;
		else result[3]++;
	}
}