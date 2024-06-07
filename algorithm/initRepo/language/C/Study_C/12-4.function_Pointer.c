#include <stdio.h>

int max(int a, int b);
int donothing(int a, int b);
int self(int max);

void main() {
	int a=1, b=2;
	int (*pmax)(int, int); // �Լ� ������.
	pmax = max;// ���� : &max�� Ʋ�� ����;

	printf("max(a,b): %d\n", max(a, b));
	printf("max(a,b): %d\n", pmax(a, b));

	pmax = donothing;
	printf("%d", pmax(1,2));
	
	printf("\n\n\n");

	printf("%d", self(5));
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int donothing(int a, int b) {
	return 1;
}

/*
���� : �ڱ� �ڽ��� ȣ���ϴ� �Լ��� �̿��ؼ� 1 ���� Ư���� �������� ���� ���ϴ� ���α׷��� ��������. (���̵� : ��)

�ٽ� Ǯ�� �� ��.

int self(int max) {
	int value;
	if (max <= 1) return 1;
	else {
		value = (max * (self(max - 1)));
		return value;
	}
}

*/