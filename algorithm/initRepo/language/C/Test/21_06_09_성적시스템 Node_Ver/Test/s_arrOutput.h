#pragma once
#include "grade.h"
#include "struct.h"
#include <stdio.h>
void s_outputAll(student* s_arr, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("�̸� : %s ���� : %d �й� : %d ���� : %d\n", (s_arr + i)->name, ((s_arr + i)->age), ((s_arr + i)->s_num), ((s_arr + i)->score));
	}
}
void s_output(student* s_arr, int cnt) {
	for (int i = cnt-1; i < cnt; i++) {
		printf("�̸� : %s ���� : %d �й� : %d ���� : %d\n", (s_arr + i)->name, ((s_arr + i)->age), ((s_arr + i)->s_num), ((s_arr + i)->score));
	}
}
void s_outputAll_grade(student* s_arr, int cnt) {
	for (int i = 0; i < cnt; i++) {
		if(grade((s_arr + i)->score)==1){ 
			printf("�̸� : %s ���� : %d �й� : %d ���� : %d ��� : ��������\n", (s_arr + i)->name, ((s_arr + i)->age), ((s_arr + i)->s_num), ((s_arr + i)->score));
		} else {
			printf("�̸� : %s ���� : %d �й� : %d ���� : %d ��� : %c\n", (s_arr + i)->name, ((s_arr + i)->age), ((s_arr + i)->s_num), ((s_arr + i)->score), grade((s_arr + i)->score));
		}
	}
}