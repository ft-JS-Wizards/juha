#include <stdio.h>
#include <stdlib.h>

struct Test {
	int a;
	int b;
};
void main() {
	struct Test* arr;
	int size;

	printf("����ü �迭�� ũ��");
	scanf_s("%d", &size);

	arr = (struct Test *)malloc(sizeof(struct Test) * size);
	
	for (int i = 0; i < size; i++) {
		scanf_s("%d %d %d", &(*arr).a, &arr->b);//,&arr[i].b
		printf("%d", arr[i].a);
		printf("%d", arr[i].b);
	}
	free(arr);
}