#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���� ����Ʈ ��� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

//header ��带 ����ü�� ����
typedef struct {
	listNode* head;
}linkedList_h;

// ���� ���� ����Ʈ�� �����ϴ� ����
linkedList_h* createLinkedList_h() {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}


//���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

//ù��° ��� ����.
void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}

//��带 pre �ڿ� �����ϴ� ����.
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L == NULL) {
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) L->head = newNode;
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

// ������ ���� �����ϴ� ����
void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) { // ���� ����Ʈ�� ������ ��� 
		L->head = newNode;// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}

	// ���� ����Ʈ�� ������ �ƴ� ���
	temp = L->head;
	while (temp->link != NULL)temp = temp->link; //���� ����Ʈ�� ������ ��带 ã��
	temp->link = newNode;// �� ��带 ������ ���(temp)�� ���� ���� ����
}

// ��� ���� ����
void deleteNode(linkedList_h* L, listNode* p) {
	listNode* pre;					// ������ ����� ������ ��带 ��Ÿ�� ������
	if (L->head == NULL) return;	// ���� ����Ʈ��� ���� �ߴ� ����
	if (L->head->link == NULL) {	// ����Ʈ�� ��尡 �� ���� �ִ� ���
		free(L->head);				// ù ��° ��带 �޸𸮿��� ����
		L->head = NULL;				// ����Ʈ ���� �����͸� NULL�� ����
		return;
	}
	else if (p == NULL)return;		// ������ ��尡 ������ ���� ���� �ߴ�
	else {							// ������ ����� p������ ��带 ������ pre�� �̿��� ã��
		pre = L->head;
		while (pre->link != p) {
			pre = pre->link;
		}
		pre->link = p->link;		// ������ ��� p�� ������ ���� ���� ��带 ����
		free(p);					// ���� ����� �޸� ����
	}
}

listNode* searchNode(linkedList_h* L, char* x) {
	listNode* temp;
	temp = L->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}

void reverse(linkedList_h* L) {
	listNode* p;
	listNode* q;
	listNode* r;

	p = L->head; // ������ p�� ù ��° ��忡 ����
	q = NULL;
	r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q -> link = r;
	}
	L->head = q;
}