#include <stdio.h>

int main() {
    /*
    n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
    

    */
    int num;
    scanf_s("%d", &num);
    int temp = 0;
    for (int i = 0; i < num; i++) {
        temp += i + 1;
    }
    printf_s("%d", temp);
    return 0;
}