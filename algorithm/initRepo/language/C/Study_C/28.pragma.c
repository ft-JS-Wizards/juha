#include <stdio.h>
#include "28.weird.h"
#pragma pack(1) // ����ü�� 1byte������ ����. pragma�� �����Ϸ� ������ ���� �ٸ� �����Ϸ����� �۵����� ���� �� ����.
#include "28.weird2.h"


void main() {
	struct Weird a;
	printf("size of a : %d \n", sizeof(a)); //4byte������ ó��, �����Ϸ��� 4byte�� �����͸� �����ϴ� ���� ����, �̰��� "������� ��迡 �����ִ�" ��� ��
}