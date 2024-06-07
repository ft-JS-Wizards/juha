#include "grade.h"
#include "menu.h"
#include "struct.h"
#include "node.h"
#include "searchNode.h"
#include "insertNode.h"
#include "deleteNode.h"
enum { input=1, search, insert, del, searchAll, read, end };

char name[10];
int age, s_num, score;
student* header=NULL;
student* node;

int main() {
	int choice;
	while (1) {
		printf("\n========================================================================\n");
		printf("|1. �Է� | 2. �˻� | 3. ���� | 4. ���� | 5. ��ü��ȸ | 6. ���� |7. ����|\n");
		printf("========================================================================\n\n");
		scanf_s("%d", &choice);

		switch (choice) {
			case(input): {
				printf("�̸�, ����, �й�, ������ �Է����ּ���.\n");
				scanf_s("%s %d %d %d", name, sizeof(name), &age, &s_num, &score);
				
				if (header==NULL) header = node = CreateNode(name, age, s_num, score);
				else node = addNode(node, name, age, s_num, score);
				break;
			}
			case (search):{
				if (header != NULL) {
					printf("ã�� �̸��� �Է����ּ���.\n");
					scanf_s("%s", name, sizeof(name));
					searchNode(header, name);
					break;
				}else{
					printf("���� �����ϴ�.\n"); 
					break;
				}
			}
			case (insert): {
				printf("���� �� �̸��� �Է����ּ���.\n");
				scanf_s("%s", name, sizeof(name));
				printf("���� �� �̸�, ����, �й�, ������ �Է����ּ���.\n");
				scanf_s("%s %d %d %d", name, sizeof(name), &age, &s_num, &score);
				insertNode(header, name, age, s_num, score);
				break;
			}
			case (del): {
				printf("���� �� �̸��� �Է����ּ���.\n");
				scanf_s("%s", name, sizeof(name));
				deleteNode(header, name);
				break;
			}
			case(searchAll): {
				nodeAllPrint(header);
				break;
			}
			case(read): {

				break; 
			}
			case (end): return 1;  break;
			default: printf("�߸��Է��ϼ̽��ϴ�.\n�ٽ� �Է����ּ���\n"); break;
		}
	





	}
return 0;
}
