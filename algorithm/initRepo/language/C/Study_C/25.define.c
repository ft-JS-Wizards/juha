#include <stdio.h>
#define square(x) x *x // #define �Լ�(����) ġȯ�� �� // ������ �ϱ����� ���.
//#define square(x) (x) *(x) // �̷��� ��ũ�θ� ����� 3+1�� �츮�� �ǵ��ߴ� ��ó�� �� �۵���.
#define RADTODEG(x) (x)*57.295
//#define RADTODEG(x) ((x)*57.295) // 1/RADTODEG(5)�� �������.
#define PrintVariableName(var) printf(#var "\n");//define ��ó���⿡�� ���Ǵ� #, ���� �տ� #�� ���̸� �̸� ���ڿ��� �ٲ�.
#define AddName(x,y) x##y // ��ó�������� ��밡���� ## ���ڿ��� �ϳ��� �̾��ִ� ����.
void main(int argc,char** argv) {
	printf("square(3) : %d \n", square(3));
	printf("square(3) : %d \n", square(3+1)); //3+1*3+1

	printf("5rad�� : %f ��\n", RADTODEG(5));
	printf("5rad�� : %f ��\n", 1/RADTODEG(5));

	int AddName(a,b);
	PrintVariableName(a); 
	ab = 3;
	printf("%d \n", ab);
}