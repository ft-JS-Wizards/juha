#include <stdio.h>
int change_val_exam(int i); // �Լ��� �Ӹ� �κ��� �� ���� �÷��ָ� �����Լ��� ���� ���� �ø� �� ����,������ Ÿ��;
int change_val(int* pi); // �Լ��� ������ �ɷ�����.
int add_number(int* parr);
int maximum(int* arr);

void main() {
	int i = 0;
	printf_s("ȣ�� ������ i �� : %d \n", i);

	change_val_exam(i);
	printf("ȣ�� ���� i �� : %d \n", i);

	printf("------------------\n");

	int pi=0;
	change_val(&pi);//call by address
	printf("�Լ� ���� pi:%d\n", pi);

	printf("------------------\n");
	int arr[3];

	for ( i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	add_number(arr);
	for ( i = 0 ; i < 3;i++)	printf("%d ", arr[i]);
	printf("\n------------------\n");
	
	int num_max[10] = { 0, };
	
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num_max[i]);
	}
	printf("%d", maximum(num_max));

}

int change_val_exam(int i) {
	i = 3;
	return 0;
}

int change_val(int* pi) {
	printf_s("�Լ� �ȿ��� pi�� �ּҰ� : %p\n", pi);
	printf_s("�Լ� �ȿ��� pi�� �� : %d\n", *pi);

	printf_s("�Լ� �ȿ��� ���� %d\n", *pi += 1);
	return 0;
}

int add_number(int* parr) {
	for (int i = 0; i < 3; i++) {
		parr[i]++;
	}
	return 0;
}

int maximum(int* arr) {
	int cnt;
	for (int i = 0; i < 10; i++) {
		if (i == 0) cnt = arr[0];
		if (cnt<arr[i]) cnt = arr[i];
	}
	return cnt;
}