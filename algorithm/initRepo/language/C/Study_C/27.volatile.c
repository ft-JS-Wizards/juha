/*
	�ϵ����� ����� �� ���.
*/

#include <stdio.h>	

typedef struct SENSOR {
	/*�����ȵǸ� 0, �����Ǹ� 1*/
	int sensor_flag;
	int data;
}SENSOR;//typedef struct SENSOR SENSOR;�� ����,

int main() {
	volatile SENSOR* sensor;// �����Ϸ��� sensor�� ����ȭ�� �������� ����.
	/*���� ���� �� ������ ���ѷ���*/
	while (!(sensor->sensor_flag)) {

	}
	printf("Data : %d\n", sensor->data);
}