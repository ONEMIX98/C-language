/*��һ���ַ����е�Ԫ����ĸ���Ƶ���һ�ַ�����Ȼ�����*/

#include <stdio.h>
#include <string.h> /*����strlwr()*/
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
			*from += 32; /* ����ǰ��ĸΪ��д��ת��ΪСд*/
			change = 1;
		}
		for (ptsv = vowel; *ptsv != '\0'; ptsv++)
			{
			if (*from == *ptsv)
				break;}
		if (change) *from -= 32;
		if (*ptsv != '\0') *to++ = *from; /* *to++��ʾȡ��ǰָ��ֵ�����Լ� */
}
	*to = '\0'; /*������ĸ��ֲ��ϣ���Ŀ���ַ���ĩβ���Ͻ����ַ�'\0'*/

}
