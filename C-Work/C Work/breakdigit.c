/*����һ��4λ���֣�Ҫ�������4�������ַ�����ÿ�������ּ��һ���ո�*/
#include <stdio.h>
#define MAX 4
void breakdigit(char *s);

int main() {
	char s[MAX+1]; /*��һ����'\0'!*/
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