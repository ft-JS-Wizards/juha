#include <stdio.h>
#include <stdlib.h>
/*
	�޸� ����(����)�Ҵ�.

	malloc�� heap�� �Ҵ�.
*/
void main() {
	int sizeOfArr;
	int* arr;
	
	printf("���� �迭�� ��");
	scanf_s("%d", &sizeOfArr);

	arr = (int*)malloc(sizeof(int) * sizeOfArr);//�޸𸮸� �Ҵ�����.

	free(arr);// ������� �ʴ� �޸𸮸� �԰� ��

	printf("\n------------------------------------\n");
	int student;// �л���
	int input;
	int* score;// �л����� �������� ����
	int sum = 0;//����

	printf("�л���: ");
	scanf_s("%d", &student);

	score = (int*)malloc(sizeof(int) * student);
	if (score != NULL) { // 2019������ �Ҵ� ������ null�� ��츦 ����� ��� ǥ�ø� ����.

		for (int i = 0; i < student; i++) {
			printf("�л� ���� : ");
			scanf_s("%d", &score[i]);
		}

		for (int i = 0; i < student; i++) {
			sum += score[i];
		}
	free(score);
	} else return 1;

	printf("%d\n", sum);
}