#include <stdio.h>

int main() {
    /*
    ������İ� ���� N*1���� N*9���� ����Ѵ�.
    2 * 1 = 2
    ...
    2 * 9 = 18

    */
    int num;
    scanf_s("%d", &num);

    for (int i = 1; i < 10; i++) {
        printf_s("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}