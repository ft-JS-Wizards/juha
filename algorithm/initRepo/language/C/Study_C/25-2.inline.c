#include	<stdio.h>

__inline int square(int a) { return a * a; }//�Ϲ� �Լ��� �޸�  ���� �Լ� ������ �۵�.(�Լ�ó�� �۵��ϴ� ������ �Լ��� �ƴ�.)
/*
	�����Ϸ��� ó��, ��ũ�ο� ���� ����� ��, ��ũ�κ��� �ζ����Լ��� �� ����.
*/
__inline int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

void main() {
	printf("%d\n", square(3));
	printf("%d\n", square(3 + 1)); // ��ũ�ο� �޸� ���� �۵�.

	printf("3,2 �� �ִ밪�� : %d", max(3, 2));

}