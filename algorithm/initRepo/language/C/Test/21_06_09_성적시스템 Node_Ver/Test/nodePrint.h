#pragma once
#include "struct.h"
#include "grade.h"
void nodePrint (student *st) {
	printf("�̸� : %s, ���� : %d, �й� : %d, ���� : %d , ���� : %c\n", st->name, st->age, st->s_num, st->score, grade(st->score));
}

void nodeAllPrint(student * first) {
	if (first->name == NULL) printf("�����Ͱ� �����ϴ�.\n");
	student* next = first;
	while (next != NULL) {
		nodePrint(next);
		next = next->nextNode;
	}
}