#include <stdio.h>

void main(int argc, char** argv) {
	printf("���� ������ ����: %d\n", argc);

	for(int i = 0;i<argc;i++){
		printf("�� ���α׷��� ���: %s\n", argv[0]);
	}
}