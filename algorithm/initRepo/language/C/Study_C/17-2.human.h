#pragma once
/*
	���� ������Ͽ� �����ϴ� ���
	1. ��������
	2. ����ü, ����ü, ����ü
	3. �Լ��� ����
	4. �Ϻ� Ư���� �Լ� (�ζ����Լ�) // 4,5�� �ڿ� ����.
	5. ��ũ��
*/

enum { male, female };

struct Human {
	char name[20];
	int age;
	int gender;
};

struct Human Create_Human(char* name, int age, int gender);
int Print_human(struct Human* human);