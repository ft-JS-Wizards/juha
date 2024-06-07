#define _CRT_SECURE_NO_WARNINGS
/*
	���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. 
	������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, 
	���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

	������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.
	����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�. �ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.

	ex) baekjoon
	a b  c  d e  f  g  h  i j k  l  m n o  p  q  r  s  t  u  v  w  x  y  z
	1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

	�� ��带 ����� �� ��.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Alphabat {
	char alphabat_name;
	int cnt;	
	struct Alphabat* nextNode; //  ��带 ������ �� Ǯ ������ ����� �Ѵ�.
} alphabat ;

alphabat* CreateAlpha() {
	alphabat* a = (alphabat*)malloc(sizeof(alphabat));
	a->alphabat_name = 'a';
	a->cnt = -1;
	a->nextNode = NULL;

	return a;
}

alphabat* addAlpha(alphabat* add) {
	alphabat* a = (alphabat*)calloc(1,sizeof(alphabat));
	alphabat* temp = add;

	while (temp->nextNode) {
		temp = temp->nextNode;
	}
	a->alphabat_name = (temp->alphabat_name)+1;
	a->cnt = temp->cnt;
	a->nextNode = temp->nextNode;
	temp->nextNode = a;
	
	return temp;
}

void NodePrint(alphabat* node) {
	alphabat* temp = node;
	do {
		//printf("%d " ,temp->cnt);
		printf("%c:%d " ,temp->alphabat_name,temp->cnt);
		temp = temp->nextNode;
	} while (temp);

}


void cntAlpha(alphabat * node, char * word, int size) {
	alphabat* temp = node;
	for (int i = 0; i < size; i++) {
		temp = node;
		while (temp->alphabat_name != *(word + i)) {
			temp = temp->nextNode;
		}
		if (temp->cnt == -1) temp->cnt = i;
	}
}

int main() {
	alphabat* node;
	char word[100];
	int size=0;
	scanf("%s", word);
	
	while (word[size]) {
		size++;
	}

	node = CreateAlpha();             //header ��� �ڵ�
	
	for (int i = 0; i < 25; i++) {    // node ���� �ڵ�
		addAlpha(node);
	}

	cntAlpha(node, word,size);

	NodePrint(node); //��� ��� �ڵ�;

	return 0;
}
