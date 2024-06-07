#include <stdio.h>

void main() {
	int a; 
	a = 127;
	printf_s("a ���� %d\n", a);
	printf_s("a ���� %d ������ %o\n", 8, a);
	printf_s("a ���� %d ������ %d\n", 10, a);
	printf_s("a ���� %d ������ %x\n", 16, a);

	float f = 3.141592f;
	double d = 3.151592;
	printf_s("%f\n", f);
	printf_s("%f\n\n", d);
	/*
	unsigned�� �׳��� ���̴� 0�� �������� "-������ ���� �� ~ 0 ~ ������ ���� ��-1"�̴�
	
	char  : 1byte | unsigned char    | 0~255 (C������ �ش�, �ڹٴ� 2byte)
	int   : 4byte | unsigned int     | 0~4,294,967,295                         * �⺻��
	long  : 8byte | unsigned long    | 1.84*10^19
	float : 4byte |                  | ��û ŭ. ���е� 6~7����
	double: 8byte |                  | ��û ŭ. ���е�  15����                 * �⺻��
	*/

	/* printf_s���� */
	printf_s("a: %5d\n", a);      // 5�ڸ��� �����, �ѱ�� �״�� ��� 
	printf_s("f: %.2f\n", f);     // �Ҽ��� 2°�ڸ��� ���
	printf_s("d: %6.2f\n", d);    // .�� ���� 2�ڸ� & 6���� ���� ��� (.�� ���Ծ���)

	/*
	���� ���� ���ǻ���

	1abc -> �� ���� ���� ����
	@#a  -> ������ ����, ����, _�� ������ �� (�ѱ� �����̳� �Ⱦ�)
	a bc -> ���� ����
	int  -> ����� ��� ����
	a!=A -> ��ҹ��� ����.
	
	���� : ���� ���� ������ �Ϸ��� �Ѱ��� ������� �������� ex) appleMac || apple_mac
	*/
}