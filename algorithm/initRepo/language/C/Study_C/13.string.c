#include <stdio.h>
int str_length(char* str);
int copystr(char* arr, char* arr1);
int stradd(int* arr, int* arr1);

void main() {
/*
	char null = 0 ==(char)NULL == '\0' ;

	string�� char�� null ���ڷ� ������ ���� �Ǻ��Ѵ�.
	string�� char�迭�̴�. ���� string == char[������ ����+1]�� �ȴ�.
*/
	char str[] = { "helloWorld" };
	printf("%d\n", str_length(str));
	str[3] = 'a';
	printf("%s\n", str);

printf("\n---------------------\n");

	char str1[20] = {NULL,};
	copystr(str, str1);
	printf("%s\n", str1);

printf("\n---------------------\n");
	stradd(str, str1);
	printf("%s\n", str1);
/*
*/
}

int str_length(char* str) {
	int i = 0;
	while (str[i]) { // �������� 0�� ���Ƿ� false;
		i++;
	}
	return i;
}

int copystr(char* arr, char* arr1) {
	while (*arr) {
		*arr1 = *arr;
		arr++;
		arr1++;
	}
	*arr = '\0';
	return 1;
}

int stradd(int* arr, int* arr1) {
	while (*arr1) {
		arr1++;
	}
	while (*arr) {
		*arr1 = *arr;
		arr++;
		arr1++;
	}
	arr1 = '\0';
	return 1;
}