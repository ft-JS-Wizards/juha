#pragma once
/*
	���丮��	n! -> n*(n-1)! -> n*n(n-1)*(n-2)! .....
*/

unsigned long int factorial(int num) {
	if (num <= 1) return 1;
	else return (num * factorial(num - 1));
}

// n = �ϳ���ž ����, start = ��������, work = �߰� �۾���, target = ���� ����; 
void hanoi(int n, int start, int work, int target) {
	if (n == 1)	printf("���� %d�� %c -> %c �� �̵�\n", n, start,target);
	else {
		hanoi(n - 1, start, target, work);
		printf("���� %d�� %c -> %c �� �̵�\n", n,start,target);
		hanoi(n - 1, work, start, target);
	}
}