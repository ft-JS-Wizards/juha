#include <stdio.h>
void main() {
	int a, b;
	a = 10, b = 3;
	printf_s("a+b�� : %d\n", a + b);
	printf_s("a-b�� : %d\n", a - b);
	printf_s("a*b�� : %d\n", a * b);
	printf_s("a/b�� : %d\n", a / b);
	printf_s("a%%b�� : %d\n", a % b); // "%%" -> %
	
	double c = 3.0;
	printf_s("a/b�� : %f\n", a / c); //  �ڵ� ����ȯ, ������ ����ȯ
	printf_s("a/b�� : %f\n", a / (double)b); // ĳ����, ����� ����ȯ
	
	printf_s("%d\n", ++b); // ������
	printf_s("%d\n", b++); // ������
	printf_s("%d\n", b);
	b += 1; /* �̿ܿ��� -=, /=, *= �� ����. */
	printf_s("%d\n\n", b);

	/* 
	bit_operator 

	& �� �� �� �ϳ��� 1�̸� 1���     and
	| �� ���� ��� ������ 1���       or
	^ �� ���� �ٸ��� 1���            xor
	~ 0�̸� 1, 1�̸� 0 ���
	<< 2ĭ ��  ������ ��ܼ� ��� (����� ĭ�� 0 ����)
	>> 2ĭ ���������� ��ܼ� ��� (����� ĭ�� 0 ����)

	���� : ��� �� (����) ���� ��
	*/
	
	


}