#include <stdio.h>
#include <stdlib.h>
/*
		ù° �ٿ��� �׽�Ʈ ���̽��� ���� tcase�� �־�����.
		��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����.
		������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

		�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.

		1. �׽�Ʈ ���̽� ������ �޴´�.
		2. �л� ���� �޴´�.
		3. �л� �� ũ�⸸ŭ�� ���� �迭�� �����.
		4. �����迭�� ������ �޴´�.
		5. ����� ����Ѵ�. ( �Լ��� �����Ѵ�.)
		6. ����� �Ѵ� �л��� ������ ����Ѵ�. (�Լ��� ����)

		��� �Լ��� ������ �ʿ�� ����.
*/
double avg(int student, double* score);
double overavg(double* score, double avg, int student);

int main() {
	int tCase,flag=0, student;
	double* score;
	scanf_s("%d", &tCase);

	//tCase = 1;// �˻�

	while (flag < tCase) {
		scanf_s("%d", &student);
		//student = 3; //�˻�

		score = (double*)malloc(student * sizeof(double));

		for (int i = 0; i < student; i++) {
			scanf_s("%lf", score+i);
		}
		//printf("%lf", avg(student, score));
		printf("%.3lf%%\n",overavg(score, avg(student, score), student));
		overavg(score, avg(student, score), student);
		
		free(score);
		flag++;
	}

	return 0;
}

double avg(int student, double * score) {
	double total=0;

	for (int i = 0; i < student;i++) {
		total += score[i];
	}

	return total / student;

}

double overavg(double* score, double avg, int student) {
	double cnt=0;
	for (int i = 0; i < student; i++) {
		if (avg < score[i]) cnt += 1;
	}
	return cnt / student*100;
}