#include <stdio.h>

int main() {
	/*
		9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		���� ���, ���� �ٸ� 9���� �ڿ���
		3, 29, 38, 12, 57, 74, 40, 85, 61
		�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
	*/
	int arr[9];
	int temp, cnt;
	for (int i = 0; i < sizeof(arr) / 4; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < sizeof(arr) / 4; i++) {
		if (i == 0) {
			temp = arr[i];
			cnt = 1;
		}
		if (temp < arr[i]) {
			temp = arr[i];
			cnt = i + 1;
		}
	}
	printf("%d\n%d", temp, cnt);
	return 0;
}