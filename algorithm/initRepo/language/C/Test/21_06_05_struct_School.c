
#include <stdio.h>
#include <stdlib.h>
#include "source.h"
/*
	���� �Է� ���α׷� �ۼ�

����ü �ۼ�
1-1. �л�

�̸�(unique), ����, �й�

1-2. ����
����, ������ �Է��ϸ� �������(���� A B C D F)

�л� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
���� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
�л� �˻��� �л��� ������ ��ȸ ���� ��ȸ �Ǿ�� �Ѵ�.

��� ����� �Ʒ��� �������̽��� �����ؾ� �Ѵ�.
5-1. 1)�Է�, 2)�˻�, 3)����, 4)���� 5)�˻� 6)����

5-2. �Է�, �˻�, ����, ������ ���������� �̷�� ���� �Ѵ�.

��, ���α׷� ����� �ѹ� ������ ���� ������ ���� �ƴ϶� ��������� ���� �Ǿ�� �Ѵ�.

���ѽð� 3�ð�
*/


int main() {
	char select = 0;
	int age, s_num, score, flag = 0;
	char name[10];
	struct Student* first;

	while (1) {
		printf("�޴�: 1)�Է�, 2)�˻�, 3)����, 4)����  5)����\n");
		menu(&select);
		switch (select-48) {
		case(1): {
			printf_s("�̸�, ����, �й�, ������ �Է����ּ���\n");
			scanf_s("%s %d %d %d", name,sizeof(name), &age, &s_num, &score);
			if (flag == 0) first = createStudent(name, age, s_num, score);
			else newStudent(nextStudent(first), name, age, s_num, score);
			printf("%s %d %d %d\n", nextStudent(first)->name, nextStudent(first)->age, nextStudent(first)->s_num, nextStudent(first)->score);
			flag++;
			break; 
		}
		case(2): break;
		case(3): break;
		case(4): break;
		default: return 0; 

		}
	}
}
		
