#include <stdio.h>
#include <string.h>

void main() {
	char str[50] = { "I love Chewing C hahaha" };
	char str2[50];
	char str3[50];

	memcpy(str2, str, strlen(str) + 1); // ���ڿ� ���� ������ �� ������ ��� ���.
	memcpy(str3, "hello", 6); // �޸��� Ư���� �κ��� �ٸ� �޸� ������ ����.

	printf("%s \n", str);
	printf("%s \n", str2);
	printf("%s \n", str3);

	printf("\n-------------------------------\n");
	printf("%s \n", str);
	memmove(str + 23, str + 17, 6);
	memmove(str + 1, str + 17, 6);
	printf("%s\n", str);//memcpy�� �޸� �޸� ������ ���ĵ� ������

	printf("%d\n",memcmp(str, str2, 16));//�� �޸��� ���ϴ� ��ŭ ��. ������ 0 �ƴϸ� 0�� �ƴ� �� ����.
}