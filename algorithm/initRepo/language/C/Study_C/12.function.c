#include <stdio.h>
int hello() {
printf("hello Funtion\n");
return 0;
}

int magicbox() {
	//i += 4; // ���� : ���� �Լ������� ���ǵ� ���������� magic box���� ����Ϸ� �Ͽ����Ƿ�....
	return 0;
}

int slave(int master_money) {
	master_money += 100000;
	return master_money;
}

/*
	���� 1
	����� ������ �����̰� �ÿ�ġ �ʾ����� �������� �����ϰ� 10000 �޷��� ì������ ���� ����ġ ���� ������ ��� �Ǿ����ϴ�. 
	�������� slave �Լ��� ���ڸ� 2 ���� ������, �ϳ��� ���� ������ ���, �ٸ� �ϳ��� ���� ������ ������ ���ڷ� ���޹޴� ���ο� �Լ��� ����� ������ 
	(���̵� : ��)
*/
int slave_now(int cur, int today) {
	printf("������ ����� : %d\n���� ������ %d\n", cur, today);
	return cur + today;
}
/*
	����3
	1 ���� n ������ ���� ���ϴ� �Լ��� �ۼ��غ�����. 
	�������� ������ �ᵵ ������ for ������ �ۼ��ϴ� ���� ���� �ϴµ����� ������ �ɵ� �մϴ�.
*/
int one_n(int n) {
	int temp=0;
	for (int i = 1; i < n+1; i++) {
		temp = temp + i;
	}
	return temp;
}

int prime(int n) {

	int cnt = 0,temp=0;

	for (int i = 1; i < n+1; i++) {
		if (i == 1)continue;

		for (int j = 1; j < i; j++) {
			if (i % j == 0)temp += 1;
			if (j != i-1) continue;
			if (temp ==1 ) {
				cnt++;
				printf("%d ", i);
			}
			temp = 0;
		}
	}
	printf("\n");
	return cnt;
}


void main() {  // main()�Լ��� ��� ��ȯ���� �ü���� �޾Ƶ帲
	//int i ;//magicbox ����.
	printf("%d\n", hello());

	printf("-----------------------\n");

	printf("%d\n", slave(100)); // call by value
	
	printf("-----------------------\n");

	printf("������ �Ѱ� : %d\n", slave_now(1000, 234));

	printf("-----------------------\n");

	printf("1���� N���� ���� ����? %d\n", one_n(5));

	printf("-----------------------\n");

	printf("���� ���ڸ� �Է����ּ���\n");
	int prime_num;
	scanf_s("%d", &prime_num);

	printf("%d\n", prime(prime_num));

}