#define _CRT_SECURE_NO_WARNINGS
/*
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. 
S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.

ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. 
�� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����. 
S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.

�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int testCase,repetition,i=0;
	char chart[20];
	
	scanf("%d", &testCase);

	for (int x = 0; x < testCase; x++) {
		i = 0;
		scanf("%d %s", &repetition, chart);
		while (chart[i]) {
		
			for (int j = 0; j < repetition; j++) {
				printf("%c", chart[i]);
			}
		
			i++;
		
		}
		printf("\n");
	}
	return 0;
}