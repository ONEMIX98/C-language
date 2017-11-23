/*输入一个4位数字，要求输出这4个数字字符，但每两个数字间空一个空格*/
#include <stdio.h>
#define MAX 4
void breakdigit(char *s);

int main() {
	char s[MAX+1]; /*留一个给'\0'!*/
	gets(s);
	breakdigit(s);

	getchar();
	return 0;

}

void breakdigit(char *s) {
	for (int i = 0; i < MAX; i++) {
		printf("%c", s[i]);
		if (i < 3) printf(" ");
	}
}