#include <stdio.h>

void main() {
	int student[3][2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if(j==0){
				printf_s("%d��° �л��� ���� �Ƿ�\n", i+1);
				scanf_s("%d", &student[i][j]);
			}else if (j == 1) {
				printf_s("%i��° �л��� ���� �Ƿ�\n", i + 1);
				scanf_s("%d", &student[i][j]);
			}
			else {
				printf_s("%i��° �л��� ���� �Ƿ�\n", i + 1);
				scanf_s("%d\n", &student[i][j]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if(j==0){
				printf_s("%d��° �л��� ���� �Ƿ�\n", i + 1);
				printf_s("%d\n", student[i][j]);
			}else if (j == 1) {
				printf_s("%i��° �л��� ���� �Ƿ�\n", i + 1);
				printf_s("%d\n", student[i][j]);
			}
			else {
				printf_s("%i��° �л��� ���� �Ƿ�\n", i + 1);
				printf_s("%d\n", student[i][j]);
			}
		}
	}
}