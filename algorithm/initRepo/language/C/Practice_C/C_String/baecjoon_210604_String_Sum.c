#include <stdio.h>
#include <stdlib.h>
/*
	N���� ���ڰ� ���� ���� �����ִ�. 
	�� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. 
	��° �ٿ� ���� N���� ������� �־�����.

	�Է����� �־��� ���� N���� ���� ����Ѵ�.

	ex) 5
		54321                  ��: 15
*/

int main() {

	int N, sum=0;
	scanf_s("%d", &N);
	char c;
	getchar();
	for (int i = 0; i < N; i++) {
		scanf_s("%c", &c,1);
		sum += (int)c - 48;
	}
	printf("%d", sum);
	return 0;
}
