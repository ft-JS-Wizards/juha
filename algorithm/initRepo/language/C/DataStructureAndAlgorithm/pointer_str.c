#include <stdio.h>

void main() {
	int i;
	char string1[20] = "Dreams come true!", string2[20], * ptr1, * ptr2;

	ptr1 = string1;
	printf("string1 : %s\nptr1 :%s\n\n", string1, ptr1);

	printf("%s\n", ptr1 + 7); //ptr1�� char* �ּҰ��� 7��° �ڿ������� NULL������ �о�´�.

	ptr2 = &string1[7]; // ���� ���� ������ char* +7 �� �ּҰ��� ptr2�� �־���.
	printf("%s\n", ptr2);

	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}

	printf("\n%s", string2);
}