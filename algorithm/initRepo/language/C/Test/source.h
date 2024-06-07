#pragma once
#include <stdio.h>
#include <string.h>
/*
	���� �Է� ���α׷� �ۼ�

����ü �ۼ�
1-1. �л�
�̸�(unique), ����, �й�

1-2. ����
����, ����(���� A B C D F)

�л� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
���� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
�л� �˻��� �л��� ������ ��ȸ ���� ��ȸ �Ǿ�� �Ѵ�.

��� ����� �Ʒ��� �������̽��� �����ؾ� �Ѵ�.
5-1. 1)�Է�, 2)�˻�, 3)����, 4)���� 5)�˻� 6)����

5-2. �Է�, �˻�, ����, ������ ���������� �̷�� ���� �Ѵ�.

��, ���α׷� ����� �ѹ� ������ ���� ������ ���� �ƴ϶� ��������� ���� �Ǿ�� �Ѵ�.

���ѽð� 3�ð�
*/
struct Student {
	char name[10];
	int age;
	int s_num;
	int score;
	struct Student* nextStudent;
};

char grade(int score) {
	if (score < 40) return 'F';
	else if (score < 50) return 'E';
	else if (score < 60) return 'D';
	else if (score < 70) return 'C';
	else if (score < 80) return 'B';
	else if (score < 90) return 'A';
	else {
		printf("�ٽ� �Է��ϼ���\n");
		return 0;
	}
}

char menu(char* select) {
	scanf_s("%c", select, 1);
	getchar();
	return *select;
}

struct Student* createStudent(char* name, int age, int s_num, int score) {
	struct Student *header;
	strcpy_s(header->name, sizeof(header->name), name);
	header->age = age;
	header->s_num = s_num;
	header->score = score;
	header->nextStudent = NULL;
	return header;
}
struct Student* newStudent(struct Student* pre, char* name, int age, int s_num, int score) {
	struct Student *new;
	new->nextStudent=pre->nextStudent;
	strcpy_s(new->name, sizeof(new->name), name);
	new->age = age;
	new->s_num = s_num;
	new->score = score;
	struct Student* nextStudent = NULL;
	return new;
}
struct Student* nextStudent(struct Student* first) {
	struct Student* last=first;
	while (last->nextStudent == NULL){
		last = first->nextStudent;
	}
	return last;
}
