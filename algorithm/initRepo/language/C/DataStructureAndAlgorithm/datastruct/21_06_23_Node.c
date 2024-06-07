#include "21_06_23_Node.h"

void main() {
	linkedList_h* L;
	L = createLinkedList_h();
	
	printf("(1) ���� ����Ʈ �����ϱ�\n");
	printList(L); getchar();

	printf("(2) ����Ʈ�� [��] ��� �����ϱ�!\n");
	insertFirstNode(L, "��");
	printList(L); getchar();

	printf("(3) ����Ʈ �������� [��] �����ϱ�\n");
	insertLastNode(L, "��");
	printList(L); getchar();

	printf("(4) ����Ʈ ù��°�� [��] ��� �����ϱ�\n");
	insertFirstNode(L, "��");
	printList(L); getchar();
	
	printf("(5) ����Ʈ�� ������ �����Ͽ� ���鸮��Ʈ �����\n");
	freeLinkedList_h(L);
	printList(L); getchar();
/*--------------------------------------------------------------------------------------*/
	listNode* p;
	L = createLinkedList_h();
	printf("(1) ����Ʈ�� [��], [��], [��] ��� �����ϱ�\n");
	insertLastNode(L, "��");	insertLastNode(L, "��");	insertLastNode(L, "��");
	printList(L); getchar();

	printf("(2) ����Ʈ���� [��] ��� Ž���ϱ�!\n");
	p = searchNode(L, "��");
	if (p == NULL)printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
	getchar();

	printf("(3) ����Ʈ���� [��] �ڿ� [��] ��� �����ϱ�!\n");
	insertMiddleNode(L, p, "��");
	printList(L); getchar();
	
	printf("(4) ����Ʈ���� [��] ��� �����ϱ�	\n");
	p = searchNode(L, "��");
	deleteNode(L, p);
	printList(L); getchar();

	printf("(5) ����Ʈ ������ �������� �ٲٱ�	\n");
	reverse(L);
	printList(L);

	freeLinkedList_h(L);
	getchar();
}