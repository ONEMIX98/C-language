/*�ַ�������*/

#include <stdio.h>
#include<string.h> /*����strlen()*/
#define MAX 100
void reverse(char *s);
int main() {
	char s[MAX];
	gets(s);
	reverse(s);
	printf("%s", s);

	getchar();
	return 0;
}

void reverse(char *s) {
	int length = strlen(s);
	for (int i = 0; i < length/2; i++)
	{
		char tc;
		tc = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tc;

	}
}