#include <stdio.h>
#include "17.headerFile.h"// ��ó���� ��� : ������ ������ ����
char compare(char* str1, char *str2);

void main() {
	char str1[20];
	char str2[20];

	scanf_s("%s", str1,sizeof(str1));
	scanf_s("%s", str2, sizeof(str1));

	if (compare(str1, str2)) {
		printf("%s�� %s �� ���� �����Դϴ�. \n", str1, str2);
	}
	else {
		printf("%s�� %s �� �ٸ� �����Դϴ�. \n", str1, str2);
	}

	int a = 0;
	test(&a);
	printf("%d", a);
}