#include <stdio.h>

void main() {
	int input;
	printf_s("������\n");
	printf_s("������ �Ͻ� ������ �Է��ϼ���.\n");
	printf_s("1. ���ֱ�\n");
	printf_s("2. �ı��\n");
	printf_s("3. ����\n");
	scanf_s("%d", &input);
	
	switch (input) {
		case 1: printf_s("�ȳ�"); break;
		case 2: printf_s("��������"); break;
		case 3: printf_s("��ƿ��"); break;
		default: printf_s("����� �� �� �Է¿�"); break;
	}
}