#include <stdio.h>
void add_one(int* a);
/*
	����ü�� ���� �ʱ�ȭ�� �Ұ���.
*/
struct Human { // ���� Ÿ���� �������� �迭. 
	char name[4];
	int age;
	int height;
	int weight;

	
};

struct Test {
	int* pointer;
};

struct Test2 {
	int a;
};

void main() {
	struct Human H;

	scanf_s("%s", H.name, sizeof(H.name));
	H.age = 29;
	H.height = 172;
	H.weight = 84;

	printf_s("�̸� %s, ���� %d, Ű %d, ������ %d\n",H.name, H.age, H.height, H.weight);
	
	printf("\n----------------------\n");

	struct Human Friend[3]; // struct �迭 ����.
	int cnt=3;

	for (int i = 0; i < cnt; i++) {
		scanf_s("%s", Friend[i].name, sizeof(H.name));
		Friend[i].age = i + 25;
		Friend[i].weight = i + 172;
		Friend[i].height = i + 70;
		printf("%s %d %d %d\n",Friend[i].name,Friend[i].age,Friend[i].weight,Friend[i].height);
	}

	printf("\n----------------------\n");

	struct Test first;
	struct Test* f_p = &first;
	int num =3;

	first.pointer = &num;
	*first.pointer = 3;
	printf("%d\n", num);

	*f_p->pointer = 4;
	printf("%d\n", num);
	
	printf("\n----------------------\n");

	struct Test2 second;
	struct	Test2* s_p;
	s_p = &second;
	s_p->a = 0;
	add_one(&second.a);

	printf("%d\n", second.a);

	add_one(&s_p->a);

	printf("%d\n", s_p->a);

	printf("\n----------------------\n");

	struct Test2 Tt, Tt2;
	Tt.a = 5;
	Tt2 = Tt;
	printf("%d", Tt2.a);
}

void add_one(int* a) {
	*a += 1;
}