#include <stdio.h>

void main() {
	for (int i = 0; i < 20; i++) {
		printf_s("%d\n", i);
	}
	int i = 0;

	for (; ; ) {
		printf_s("�׻� true\n");
		if (i++ == 5) {
			break;
		}
	}

	for (;;i--) {
		if (i == 2) { continue; }
		else if (i == 0) break;
		printf_s("%d\n", i);
	}

	while (i < 5) {
		i++;
		printf_s("false �� ����\n");
	}

	do {// �ϴ� ����.
		printf_s("%d\n", i);
	} while (0); // 0�� false

	printf_s("__________________��������___________________");
							/* �������� */

	printf_s("���� 1 (���̵� : ��)\n");
	printf_s("1000 ������ 3 �Ǵ� 5 �� ����� �ڿ������� ���� ���Ѵ�.\n");
	
	int cnt=0;
	for (int i = 1000; i > 0; i--) {
		if (i % 3 == 0 || i % 5 == 0) {
			//printf_s("%d\n", i);
			cnt += i;
		}
	}
	printf_s("1�� ���� ����? %d\n", cnt);
	
	printf_s("\n-----------------------\n");

	printf_s("���� 2 (���̵� : ��)\n");
	printf_s("����ڷ� ���� N ���� �Է� �ް� 1 ���� N ������ ���� ����Ѵ�.\nn���� �Է����ּ���. ");

	int N;
	cnt = 1;
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++) {
		cnt *= i;
	}
	printf_s("��: %d\n", cnt);
/*
	printf_s("\n-----------------------\n");

	printf_s("���� 3 (���̵� : ��)\n");
	printf_s("1000000 ������ �Ǻ���ġ ���� ( N ��° ���� N - 1 ��° �װ� N - 2 ��° ������ ǥ���Ǵ� ����, ������ 1,1,2,3,5,8,...) �� ¦�� �׵��� ���� ���Ѵ�.\n");

	cnt = 1;
	int temp1=1,temp2=1, temp3=0;
	for (int i = 0; i < 3; i++) {
		if (i%2 ==0) cnt += temp3;
		if (i % 2 == 0) {
			temp1 = temp3;
		} else {
			temp2 = temp3;
		}
		temp3 = temp1 + temp2;
		printf_s("%d ", temp3);
	}
		printf_s("���� : %d\n", cnt);
*/
}