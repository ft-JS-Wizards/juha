#include <stdio.h>
#include <stdlib.h>

void get_average(int** arr, int numStudent, int numSubject);

void main(int argc, int**argv) {
	int x, y;
	int** arr;

	printf("arr[x][y]\n");
	scanf_s("%d %d", &x, &y);
	arr = (int**)malloc(sizeof(int*) * x);//1���� �迭�� int �����͸� ����. �� ������ �迭;
	
	for (int i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int*) * y); // ������ �迭�� �޸� ���� �Ҵ�.
	}

	for (int i = 0; i < x; i++) {
		free(arr[i]);// ������ �迭���� free����.
	}
	free(arr);// free ���� �߿�!
	
	printf("\n-------------------------------\n");
	int sum = 0;
	int subject, student;

	printf("���� �� : ");
	scanf_s("%d", &subject);
	printf("�л��� �� : ");
	scanf_s("%d", &student);

	arr = (int**)malloc(sizeof(int*) * subject);

	for (int i = 0; i < subject; i++) {
		arr[i] = (int*)malloc(sizeof(int) * student);
	}

	for (int i = 0; i < subject; i++) {
		printf("���� %d ����\n", i);
		for (int j = 0; j < student; j++) {
			printf("j�л��� %d�� ���� �Է� :",i+1);
			scanf_s("%d", &arr[i][j]);
		}
		printf("������ \n");
		for (int j = 0; j < student; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	get_average(arr, student, subject);
	
	for (int i = 0; i < subject; i++) {
		free(arr[i]);
	}
	free(arr);

	//vidual studio���� ������ ���� ����.
	/*
	printf("\n----------------------------------\n");
	int width, height;
	printf("���� ũ�� ");
	scanf_s("%d", &width);
	printf("\n���� ũ�� ");
	scanf_s("%d", &height);
	
	int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	*/

}

void get_average(int** arr, int numStudent, int numSubject) {
	int sum;
	for (int i = 0; i < numSubject; i++) {
		sum = 0;
		for (int j = 0; j < numStudent; j++) {
			sum += arr[i][j];
		}
		printf("���� %d�� ������� : %d\n", i+1, sum / numStudent);
	}
}