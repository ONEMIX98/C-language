/*将一个字符串中的元音字母复制到另一字符串，然后输出*/

#include <stdio.h>
#include <string.h> /*利用strlwr()*/
void vowelCopy(char *from, char *to);
char vowel[] = { 'a', 'e', 'i', 'o', 'u' };
int main() {
	char s1[100], s2[100];
	gets(s1);
	vowelCopy(s1, s2);
	puts(s2);
	getchar();
	return 0;

}

void vowelCopy(char *from, char *to) {
	char *ptsv;
	int change;
	for (; *from != '\0'; from++){
		change = 0;
		if (*from >= 'A' && *from <= 'Z')
		{
			*from += 32; /* 若当前字母为大写，转换为小写*/
			change = 1;
		}
		for (ptsv = vowel; *ptsv != '\0'; ptsv++)
			{
			if (*from == *ptsv)
				break;}
		if (change) *from -= 32;
		if (*ptsv != '\0') *to++ = *from; /* *to++表示取当前指向值，并自加 */
}
	*to = '\0'; /*所有字母移植完毕，将目标字符组末尾加上结束字符'\0'*/

}
