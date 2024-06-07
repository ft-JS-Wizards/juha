#include <stdio.h>
void test(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void main() {
/*
	�����͸� ���ν�����.

	1. �������� ũ��� 8byte�̴�.
	2. ������ ������ �ּҰ��� ������ �ִ�.
	3. ������ ������ Ÿ���� �ּҰ� ���� Ÿ�� ũ�⸸ŭ�� ������ �����ϰ� �ȴ�.(�迭���� ���.) 
		ex. int *p [3] = {1,2,3}; �� ��, p[2] �� *(p+2)�� ����.  
	4. *�� �ּҿ� �����Ѵ�. &�ּҸ� �����´�.�� �����ϸ� ���ϴ�.
*/
	int first = 1;
	int second = 2;
	int *p;
	p = &first;
	printf("%d %d\n", *p,first); // ��, p�� x�� �ּҰ��� �����Ͽ� ���� �ҷ��Ա� ������ x�� ���� ���� ���´�.
	printf("%p %p\n", p, &first); // ���� ���� �ּҰ��̴�.
	
	printf("\n------1-----\n");

	test(&first, &second); // �Լ��� �ּҰ��� �����־� ������ �����ϰ� ���� �� �ִ�.
	printf("first:%d second:%d", first, second);
	test(&first, &second); 

	printf("\n------2-----\n");

	const int* cp = &first; 
	cp = &second;
	printf("%d\n", *cp); // int�� const�� ���� ��� �ּҰ��� �ٲ� �� �־���.
	// �׷��� ���� int���� �����ϸ� ������ ���� �ʴ´�. *cp = first; (x)
	int* const pc = &first;
	//pc = &second; const�� �ּҰ��� ��� ������ �����Ѵٸ� �ּҰ��� �ٲ� �� ����.
	*pc = 0;// �׷��� ���� ������ �����ϴ�.
	printf("%d\n", *pc);
	const int* const cpc = &first; // ���� �����ϵ�, �ּҰ�, �� �Ѵ� ������ �� ����.

	printf("\n-----3------\n");

	int arr2[5][2] = { {1,2},{3,4},{5,6},{7,8},{9,10}};
	int arr3[2][2][2] = { {{1,2},{3,4}},{{5,6},{7,8}}};
	p = &arr2[0];
	for (int i = 0; i < sizeof(arr2) / 4; i++) {
		printf("%d %d\n", i, *(p + i));		
	}
	printf("%d\n", *(*(arr2 + 1)+1));		//  *(arr +1) = 2 �� *(arr+1)+1);�� 4 => 2���� int ���� ũ���� +4��ŭ �ּҰ��� �ű��.
	printf("%d\n", *(*(arr2 + 1)+2));		//  *(arr +1) = 2 �� *(arr+2+1);�� 4 => 2���� +8��ŭ �ּҰ��� �ű��.
	printf("%d\n", *(*(*(arr3 + 1)+1)+1));	//  arr�ּҰ�+4+8+8 �� arr[0]���� 2ĭ 3ĭ 3ĭ �ű��. (8�� ������ �������� �ּҰ��� ���������� [8byte]�̱� ������ )

	printf("\n-----4------\n");
	int arr1[2] = { 0,1 };

	p = arr1; // p�� �ּҰ��� ������ �ֱ� ������ arr[0]�� �ּҰ��� �׳� ������ �� �ִ�.
	p = &arr1[0];//�� �����ϴ�.

	for (int i = 0; i < 2; i++) {
		printf("%d\n", *(p + i));
	}

	while (p - arr1 <= 2) { // ������ Ÿ������ ������ �Ǳ� ������ ����.
		printf("%p %p\n", p, arr1);
		p++;
	}

	printf("\n-----5------\n");
	int** pp;
	pp = &p; // pp�� p�� �ּҰ��� ����
	p = &first;
	printf_s("%d %d %d\n", **pp, * p, first); // pp�� ������ ����

	printf("\n-----�迭 ������------\n");
	int(*arrp)[2];
	arrp = &arr1;
	printf("%d %d\n", (*arrp)[1], arr1[1]);

	int(*arrp2)[5][2];
	arrp2 = &arr2;
	printf("%d %d\n", (*arrp2)[1][1], arr2[1][1]);

	/* ������ �ѹ��� ����. */
	int(*arrp3)[2];
	arrp3 = arr2;
	printf("%d %d\n", arrp3[1][1], arr2[1][1]);

	printf("\n-----7------\n");

	int* arr[2] = { &first,&second };
	for (int i = 0; i < 2; i++) {
		printf("%d\n", *arr[i]);
	}
	printf("pointer the end");
}