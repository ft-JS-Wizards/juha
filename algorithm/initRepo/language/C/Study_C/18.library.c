#include<stdio.h> 
#include<string.h> // strcpy_s, strcmp�� ���� string �Լ��� ��Ƴ���.
#define VAR 10 // VAR  == 10 �� ����.
#define A

void main() {
	char str1[20] = { "hi" };
	char str2[20] = { "hello" };

	strcpy_s(str1, sizeof(str1), str2);  // strcpy_s(���� ����, ������, ������ ���ڿ�);

	printf("%s\n", str1);
	
	if (!strcmp(str1, str2)) { // strcmp : �� ���ڿ��� ������ 0 ��ȯ, �ƴϸ� 1��ȯ;
		printf("�ΰ� ����");
	}
	else {
		printf("�ΰ� Ʋ��");
	}

	printf("\n----------------------\n");
	char arr[VAR] = { "hi" };
	printf("%s\n", arr);
	
	printf("\n----------------------\n");
#ifdef A  // (��ũ�� �̸�)�� ���ǵǾ��ٸ� �� �κ��� �ڵ忡 ���Եǰ� �׷��� �ʴٸ� �ڵ忡 ���Ե��� �ʴ´�.
	printf("AAAAA\n");
#endif
#ifdef B
	printf("BBBB\n");
#endif

}