#include <stdio.h>

int main() {
    /*
    �ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    */

    int a;
    scanf_s("%d", &a);

    for (int i = 1; i <= a; i++) {
        for(int j = 0;j<i;j++) printf("*");
        printf("\n");
     }
     return 0;

}