#include <stdio.h>
void function();

int global; // ���� ����. ������ ������ �Ҵ�, ���������� ���ǽ� 0���� �ʱ�ȭ.
int how_many_called = 0;

void main() {
	int a = 3;
	global = 10;
	{	// {} �ϳ��� ����
		int a = 4;
		printf("%d\n", a);
	}
		function();
	printf("%d\n", a);
	printf("%d\n", global);

	printf("\n");
	function();
	function();
	function();
	function();
}

void function() {
	int a = 2; // ��������
	global++;
	how_many_called++;
	printf("%d\n", how_many_called);
}