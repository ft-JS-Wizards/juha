#include < stdio.h	>

void main() {
// ��Ŀ��� r(�б�), w(����) w+(���� �б�)������ ������ ����(�����⵵ ����), r+(�а� ����)������ ������ ���� ����.
// a�� �����̱� ����, a+ �б� �����̱� ����,
// ���� c���� ����ϴ� ����.
	FILE* fp;
/*
	fp = fopen("a.txt", "w");

	if (fp == NULL) printf("write Error\n");

	fputs("hello world\n", fp);

	fclose(fp);
*/

// ���� c���� ����ϴ� ����
	if (0 == fopen_s(&fp, "C:\\Users\\gkwnd\\Desktop\\a.txt", "w")) { // fopen_s(������������ �ּҰ�,"������","���") 
		fputs("hellowrld", stdout);//stdout ǥ�� ��� ��Ʈ��.
		fputs("helloworld\n", fp); //fp�� ���,
		//fprintf(fp, "abc"); // �ٸ����.
		fclose(fp);
	}

}