#include <stdio.h>
union similar_st { // �� ������ ����. �޸𸮸� �����ϴ� ������.
	double a;// ��Ʋ����� ���. �� �ڿ������� ������.
	int b;
	char c;
};
void main() {
	enum {zero,one,two,three,four};
	int enum_ = two;

	switch (enum_){
		case (one): printf("1���\n"); break;
		case (two): printf("2���\n"); break;
		case (three): printf("3���\n"); break;
		case (four): printf("4���\n"); break;
		default:
			printf("�߸����\n");
			break;
	}	
	
	enum {zero5=5,one6,two3=3,three4,four5};
	enum_ = one6;// 6�� ����
	enum_ = three4;// two�� 3���� ���������Ƿ� three4 = 4�̴�.

	switch (enum_){
		case (one): printf("1���\n"); break;
		case (two): printf("2���\n"); break;
		case (three): printf("3���\n"); break;
		case (four): printf("4���\n"); break;
		default:
			printf("�߸����\n");
			break;
	}


}