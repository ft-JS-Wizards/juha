#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���� ���� ����Ʈ ����ü
typedef struct ListNode {
	struct ListNode* LLink;
	char data[4];
	struct ListNode* RLink;
}listNode;

// ����Ʈ ������ ��Ÿ���� head ��带 ����ü�� ����
typedef struct {
	listNode* head;
}linkedList_h;

// ���� ���� ���� ����Ʈ.
linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}

// ���� ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList_h* DL) {
	listNode* p;
	printf(" DL = (");
	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->RLink;
		if (p != NULL)printf(", ");
	}
	printf(") \n");
}

// pre �ڿ� ��带 �����ϴ� ����
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->RLink = NULL;
		newNode->LLink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->RLink = pre->RLink;
		pre->RLink = newNode;
		newNode->LLink = pre;
		if (newNode->RLink != NULL)newNode->RLink->LLink = newNode;
	}
}

// ���� ���� ����Ʈ���� old ��带 �����ϴ� ����
void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL)return; // ���� ����Ʈ�� ��� ���� �ߴ�
	else if (old == NULL)return; // ������ ��尡 ���� ��� ���� ���� �ߴ�
	else {
		old->LLink->RLink = old->RLink;
		old->RLink->LLink = old->LLink;
		free(old); //���� ����� �޸� ����
	}
}

// ����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->RLink;
	}
	return temp;
}

int main() {
	linkedList_h* DL;
	listNode* p;
	DL = createLinkedList_h(); // ���� ����Ʈ ����
	printf("1. ���� ���Ḯ��Ʈ �����ϱ�!\n");
	printList(DL); getchar();

	printf("2. ���� ���Ḯ��Ʈ�� [��] ��� �����ϱ�!\n");
	insertNode(DL, NULL, "��");
	printList(DL); getchar();


	printf("3. ���� ���Ḯ��Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�!\n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList(DL); getchar();

	printf("4. ���� ���Ḯ��Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�!\n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList(DL); getchar();
	
	printf("5. ���� ���� ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); deleteNode(DL, p);
	printList(DL); getchar();

	return 0;
}