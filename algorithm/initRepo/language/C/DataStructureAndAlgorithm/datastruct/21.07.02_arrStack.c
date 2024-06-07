#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1; // ���� �ʱ�ȭ

// ������ �������� �˻�
int isEmpty() {
	if (top == -1) return 1;
	else return 0;
}

// ������ ��ȭ�������� Ȯ���ϴ� ����
int isFull() {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

// ������ top�� ���Ҹ� �����ϴ� ����
void push(int item) {
	if (isFull()) {// ���� ��ȭ�����ΰ��
		printf("������ ��ȭ�����Դϴ�.\n");
	}
	else stack[++top] = item;    
}

// stack�� top���� ���Ҹ� �����ϴ� ����
int pop() {
	if (isEmpty()) {
		printf("������ ������ϴ�.\n");
		return 0;
	}
	else return stack[top--];
}

// ������ top ���Ҹ� �˻��ϴ� ����
int peek() {
	if (isEmpty()) {
		printf("������ ������ϴ�.");
		exit(1);
	}
	else return stack[top];
}

// ������ ���Ҹ� ����ϴ� ����
void printStack() {
	printf("\nstack { ");
	for (int i = 0; i <= top; i++) printf("%d ", stack[i]);
	printf("} ");
}

void main() {
	int item;
	printf("���� ���� ����\n");
	printStack();
	push(1); printStack();
	push(2); printStack();
	push(3); printStack(); printf("\n");

	item = peek(); printStack();
	printf("peek = %d", item);
	item = pop();	printStack();
	printf("pop = %d", item);
	item = pop();	printStack();
	printf("pop = %d", item);

	printf("\n\n���� ����\n���� : ���� ���� ����\n���� : ���� ũ�� ������ �����, �迭�� �Ҵ��ϱ� ������ �޸� ����� ȿ������ ������.");
	getchar();
}