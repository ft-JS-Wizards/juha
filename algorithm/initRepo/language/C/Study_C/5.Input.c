#include <stdio.h>

void main() {
	char c = 'A';
	
	printf_s("%d, %c\n\n", c, c); // �ƽ�Ű �ڵ� 65, A

	double celsius;

	printf_s("���� -> ȭ��\n");
	printf_s("���� �µ��� �Է�\n");

	scanf_s("%lf"/* scanf�� ��� lf���� f���� ��Ȯ�ϰ� �ؾ���. */, &celsius); // Ű����� ����� �޾Ƶ��̴� �Լ�.
	printf_s("���� %f, ȭ�� %f\n", celsius, celsius * 9 / 5 + 32); //scanf & printf == ������Լ�
	
	short sh;
	long lo;
	scanf_s("%hd\n", &sh);
	scanf_s("%ld\n\n\n", &lo);
	printf_s("%d %ld\n\n", sh, lo);
	/* ���� ���� �̻��� �����͸� ����ִ� �� == ���� �����÷ο� */
	
	//�������� (�ΰ��� �ٸ���.)
	printf_s("���� %f, ȭ�� %f\n", celsius, 9*celsius/5+32);
	printf_s("���� %f, ȭ�� %f\n", celsius, 9/5*celsius + 32);
	/* 
	���� : celsius�� �ε��Ҽ�, 9�� 5�� �����̴�.
		   ���� 1���� ��� �������� �Ҽ������� ��������
				  2���� ��� �������� ��(����)�� ���� ��� �� �������� ������ ���� �޶�����.
		   �ذ��� : ĳ����, �Ǵ� �Ҽ��� �ٲ� ������ ����ȯ�� �Ѵ�.
	*/
	printf_s("\n���� %f, ȭ�� %f\n", celsius, 9.0/5*celsius + 32);
	printf_s("���� %f, ȭ�� %f\n", celsius, (double)9/5*celsius + 32);
}