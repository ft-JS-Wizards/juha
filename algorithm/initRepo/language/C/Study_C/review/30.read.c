#include <stdio.h>

void main() {
	FILE* fp;
	char buf[20];// ���� �Է¹��� ��.
	if (0 == (fopen_s(&fp, "C:\\Users\\gkwnd\\Desktop\\a.txt", "r"))) { 
		fgets(buf, 20, fp);
		printf("�Է³��� %s\n", buf);
		fclose(fp);
	}
	
	printf("\n---------------------------------\n");
	char c;
	if(0==(fopen_s(&fp,"C:/Users/gkwnd/Desktop/a.txt","r"))){
		while ((c= fgetc(fp))!=EOF){ // EOF���ڿ� ���� -1�� ��ȯ.
			printf("%c", c);
		}
		fclose(fp);
	}
	
	printf("\n---------------------------------\n");
	if (0 == fopen_s(&fp, "C:/Users/gkwnd/Desktop/a.txt", "r")) {
		fgetc(fp);
		fgetc(fp);
		fgetc(fp);
		fgetc(fp);

		fseek(fp, 0, SEEK_SET); // ��ġ �����ڸ� �����Ű�� �Լ�, SEEK_SET (ó��),SEEK_CUR (�������� ������ ��ġ), SEEK_END(������ ��)
		
		printf("%c\n", fgetc(fp));
		fclose(fp);
	}

	printf("\n---------------------------------\n");
	if (0 == fopen_s(&fp, "C:/Users/gkwnd/Desktop/a.txt", "w")) {
		fputs("this reperence", fp); // ��ġ�����ڰ� ó������ ����� ����. ���.
		fseek(fp, 0, SEEK_SET);// �ٽ� ��ġ������ ����
		fputs("red...", fp);//���.

		fclose(fp);
	}
}