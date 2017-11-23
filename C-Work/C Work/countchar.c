/*统计字符串中字母、数字、空格和其他字符的个数*/

#include <stdio.h>
#include <ctype.h>
#define MAX 100 
void countchar(char *s, int *result);
void main() {
	char s[MAX];
	int result[4] = { 0 };
	gets(s);
	countchar(s, result);

	printf("字母：%d, 数字：%d, 空格：%d, 其他字符：%d", result[0], result[1], result[2], result[3]);
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