#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct stackNode {
	element data;
	struct stackNode* link;
}stackNode;

stackNode* top; //������ top ��带 �����ϱ� ���� ������ top ����

int isEmpty() {
	if (top == NULL)return 1;
	else return 0;
}

// ������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data = item;
	temp->link = top;
	top = temp;
}

// ������ top���� ���Ҹ� �����ϴ� ����
element pop() {
	element item;
	stackNode* temp = top;
	
	if (top == NULL) {
		printf("������ ������ϴ�.\n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

// ������ top ���Ҹ� �˻��ϴ� ����
element peek() {
	if (top == NULL) {
		printf("\n ������ ������ϴ�.\n");
		return 0;
	}
	else return (top->data);
}

// ������ ���Ҹ� ������� ���
void printStack() {
	stackNode* p = top;
	printf("\nstack [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}

void main() {
	element item;
	top = NULL;
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

	printf("\n\n���� ����\n���� : ���� ũ�� ������ ����, �޸� ����� ȿ����\n���� : �������ÿ� ���� �����.");
	getchar();

}