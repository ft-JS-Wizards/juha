/*
���� �Է� ���α׷� �ۼ�

����ü �ۼ�
1-1. �л�

�̸�(unique), ����, �й�

1-2. ����
����, ������ �Է��ϸ� �������(���� A B C D F)

�л� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
���� ������ �Է�, �˻�, ����, ���� �� �� �־�� �Ѵ�.
�л� �˻��� �л��� ������ ��ȸ ���� ��ȸ �Ǿ�� �Ѵ�.

��� ����� �Ʒ��� �������̽��� �����ؾ� �Ѵ�.
5-1. 1)�Է�, 2)�˻�, 3)����, 4)���� 5)�˻� 6)����

5-2. �Է�, �˻�, ����, ������ ���������� �̷�� ���� �Ѵ�.

��, ���α׷� ����� �ѹ� ������ ���� ������ ���� �ƴ϶� ��������� ���� �Ǿ�� �Ѵ�.

���ѽð� 3�ð�
*/
#include "menu.h"
#include "struct.h"
#include "s_arrAdd.h"
#include "s_arrSearch.h"
#include "s_arrInsert.h"
#include "s_arrDelete.h"


int main() {
	student* s_arr=NULL;
	char name[10];
	int cnt=0;

	while (1) {
		printf("=====================================================================\n");
		printf("�޴�: 1)�Է�, 2)�˻�, 3)����, 4)����  5) ��ü������ȸ 6)����\n");
		printf("=====================================================================\n");
		switch (menu()-48) {
			case(1): {
				
				cnt++;
				printf_s("�̸�, ����, �й�, ������ �Է��� �ּ���\n");
				
				if (cnt == 1) s_arr = s_arrCreate(s_arr, cnt);
				else s_arr = s_arrAdd(s_arr, cnt);
/*
				if (flag == 0) first = createStudent(name, age, s_num, score);
				else newStudent(nextStudent(first), name, age, s_num, score);
				printf("%s %d %d %d\n", nextStudent(first)->name, nextStudent(first)->age, nextStudent(first)->s_num, nextStudent(first)->score);
				flag++;
*/
				break; 
			}
			case(2): {
				if (s_arr != NULL) {
						printf("�˻��� �̸��� �Է��� �ּ���.\n");
						scanf_s("%s", name, sizeof(name));
					if (!s_search(name, s_arr, cnt)) {
						printf("���� �������� �ʽ��ϴ�.\n");
						break;
					}
					else {
						s_output(s_arr, s_search(name, s_arr, cnt));
					}
				}
				else {
					printf("�����Ͱ� �����ϴ�.\n �Է��׸��� ������ �ּ���.\n");
					continue;
				}
				break; 
			}
			case(3): {
				printf("������ �̸��� �Է��� �ּ���.\n");
				scanf_s("%s", name, sizeof(name));	
				if (!s_search(name, s_arr, cnt)) { 
					printf("�̸��� �����ϴ�.\n"); break; 
				}
				printf("���ο� �̸�, ����, �й�, ������ �Է��� �ּ���.\n");
				s_arr = s_insert(s_arr, s_search(name, s_arr, cnt),cnt);
				break;
			}
			case(4): {
				if (s_arr == NULL) {
					printf("���� �����ϴ�.\n");
					break;
				}
				printf("������ �̸��� �Է��� �ּ���.\n");
				scanf_s("%s", name, sizeof(name));
				if (!s_search(name, s_arr, cnt)) {
					printf("�̸��� �����ϴ�.\n"); break;
				}
				s_arr = s_delete(s_arr, s_search(name, s_arr, cnt), cnt);
				cnt--;
				break;
			}
			case(5): {
				s_outputAll_grade(s_arr, cnt); 
				break;
			}
			case(6): {
				printf("���α׷��� �����մϴ�."); 
				free(s_arr);
				return 0; 
			}
			default:{ 
				printf("�߸� �Է��ϼ̽��ϴ�.\n"); 
				continue;
			}
		}
	}
	free(s_arr);
}
		
