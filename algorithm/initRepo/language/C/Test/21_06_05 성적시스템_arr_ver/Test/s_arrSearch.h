#pragma once
#include "struct.h"
#include <string.h>
#include <stdio.h>
/*
	������ �� ��ȣ�� index�� ��ȯ.
*/
int s_search(char* searchWord, student* data,int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (!strcmp(searchWord, (data + i)->name)) { //strcmp == ������ 0��ȯ.
//			printf("i�� ��ȯ :%d\n", i);
			return i+1;
		}
	}
	return 0;
}