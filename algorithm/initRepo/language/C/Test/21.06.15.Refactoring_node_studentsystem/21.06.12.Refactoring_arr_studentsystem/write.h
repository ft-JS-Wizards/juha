#pragma once
#include <stdio.h>

// ��Ŀ��� r(�б�), w(����) w+(���� �б�)������ ������ ����(�����⵵ ����), r+(�а� ����)������ ������ ���� ����.
// a�� �����̱� ����, a+ �б� �����̱� ����,

FILE* fp;
if (0 == fopen_s(&fp, "C:\\Users\\gkwnd\\Desktop\\a.txt", "w")) { // fopen_s(������������ �ּҰ�,"������","���") 
	fputs("hellowrld", stdout);//stdout ǥ�� ��� ��Ʈ��.
	fputs("helloworld\n", fp); //fp�� ���,
	//fprintf(fp, "abc"); // �ٸ����.
	fclose(fp);
}