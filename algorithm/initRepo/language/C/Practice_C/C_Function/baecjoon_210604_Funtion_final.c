#include <stdio.h>

/*
	� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
	���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
	N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

	ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.

	1~99������ �񱳴���� �����Ƿ� �׳� �Ѽ� ���,
	n+(n-1)d;�� �������� ������ �� �Ѽ� ���,

	1, 1, 1 �Ѽ�
	1, 2, 4 �Ѽ�
	1, 3, 6 �Ѽ� ....

	1. 1~99���� ���̸� �Ѽ��� ���ڴ� �״��
	2. 100���� ���� ū �ڸ��� ���ڸ� a���� ���, �� �ڸ��� n���� ���, d�� ������ ����
	3. ���ڿ� ���ڸ� ���� ���� ������ 1 �ƴϸ� 0 ���
*/
int under100(int num);
int check(int num);
//int ap(int a, int n, int d);

int main() {
	int num, cnt = 0;
	scanf_s("%d", &num);

	printf("%d", check(num));


	return 0;
}

int under100(int num) {
	int cnt = 0;
	for (int i = 1; i <= num; i++) cnt += 1;
	return cnt;
}

int under1000(int num) {
	int d = (num / 10 % 10) - num / 100;
	if (num % 100 % 10 == num / 100 + 2 * d) {
		return 1;
	}
	return 0;
}

int check(int num) {
	int cnt = 0;
	if (num < 100) {
		cnt = under100(num);
	}
	else if (num < 1000) {
		cnt = 99;
		for (int i = 100; i <= num; i++) {
			cnt += under1000(i);
		}
		//printf("%d", cnt);
	}
	else {
		cnt = 144;
	}
	return cnt;
}

int ap(int a, int n, int d) {
	return (a + (n - 1) * d);
}
