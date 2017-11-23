/*Ã°ÅÝ·¨¶Ô×Ö·ûÅÅÐò*/
#include <stdio.h>
#define MAX 10
void bubsort(char *s);
int main() {
	char s[MAX + 1];
	gets(s);
	bubsort(s);
	puts(s);

	getchar();
	return 0;
}

void bubsort(char *s) {
	int i, j, n=MAX;
	char temp;
	for (j = 1; j <= n - 1; j++) {
		for (i = 0; i < n - j; i++) {
			if (s[i] > s[i + 1]) {
				temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
			}
		}
	}
}