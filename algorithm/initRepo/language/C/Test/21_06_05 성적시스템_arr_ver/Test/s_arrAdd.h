#pragma once
#include "struct.h"
#include <stdlib.h>
#include <string.h>
#include "s_arrInput.h"
//		�����Ҵ��� �� ���� ������. ���� ���� �����Ҵ翡 �� �����Ҵ��� �Ѵٰ� �þ�� ���� �ƴ�.
//		malloc �����Ҵ�, calloc �ʱ�ȭ �����Ҵ�, realloc �絿���Ҵ�. 


student* s_arrDefault(student* origin, int cnt) {
	origin = (student*)calloc(cnt , sizeof(student)); // calloc (����, Ÿ���� ũ��);
	return origin;
}

student* s_arrCreate(student* origin, int cnt) {
	origin = (student*)malloc(cnt * sizeof(student)); // malloc (ũ��)
	s_arrDefault(origin, cnt);
	s_input(origin, cnt);
	return origin;
}

student* s_arrAdd(student* origin, int cnt) {
	student* s_temp = origin;
	origin = (student*)realloc(origin, cnt * sizeof(student)); // realloc(�迭, ũ��);

	s_arrDefault(origin, cnt);

	for (int i = 0; i < cnt - 1; i++) {
		strcpy_s((origin + i)->name, 10, (s_temp + i)->name);
		(origin + i)->age= (s_temp + i)->age;
		(origin + i)->s_num= (s_temp + i)->s_num;
		(origin + i)->score= (s_temp + i)->score;
	}
	s_input(origin, cnt);
	// �����Ҵ��� ���Ҵ��� �������� temp �޸� ������ �ϸ� origin�� ������ �Ǿ� �����߻�.
	return origin;
}

