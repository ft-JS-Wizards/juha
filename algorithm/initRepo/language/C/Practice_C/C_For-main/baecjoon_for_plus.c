#include <stdio.h>

int main() {
    /*
    �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    

    */
    int num, num1,num2;
    scanf_s("%d", &num);

    for (int i = 1; i < num; i++) {
        scanf_s("%d", &num1);
        scanf_s("%d", &num2);
        printf_s("%d\n", num1+num2);
    }
    return 0;
}