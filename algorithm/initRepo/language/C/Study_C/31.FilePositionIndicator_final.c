#include <stdio.h>
void main() {
	FILE* fp;
	char data[10];
	char c;

	if (0 == fopen_s( &fp, "C:/Users/gkwnd/Desktop/a.txt", "r")) {
		
		fgets(data, 5, fp); // \n������ �ι�° ���� ũ�� -1���� �Է� ���� ��
		printf("�Է� ���� ������ : %s \n", data);


		c = fgetc(fp);
		printf("�� ������ �Է� ���� ���� : %c \n", c);

		fseek(fp, -1, SEEK_CUR); // -�� �������� �̵�.

		c = fgetc(fp);
		printf("�׷��ٸ� ���� ���ڰ�? : %c \n", c);

		fclose(fp);
	}
	if (fp == NULL) {
		printf("������ �����!");
	}


}