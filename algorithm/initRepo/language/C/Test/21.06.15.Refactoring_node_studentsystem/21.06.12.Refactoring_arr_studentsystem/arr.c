#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char name[10];
	int age, s_num, score;
}student;
/* �ݺ� �ڵ� �Լ�ȭ */
student* arrInput(student* swap, char* name, int age, int s_num, int score) {
	strcpy_s(swap->name, sizeof(name), name);
	swap->age = age;
	swap->s_num = s_num;
	swap->score = score;
	return swap;
}

/* 
	�ߺ������� �����Ͽ� createStudent�� ����.
*/
student* createStudent(student* arr,char* name, int age, int s_num, int score, int idx) {
	student* swap = (student*)malloc(sizeof(student)*(idx+1));
 
	for (int i = 0; i < idx; i++) {
		arrInput((swap+i), arr[i].name, arr[i].age, arr[i].s_num, arr[i].score);
/*
		strcpy_s(swap[i].name, sizeof(arr[i].name), arr[i].name);
		swap[i].age = arr[i].age;
		swap[i].s_num = arr[i].s_num;
		swap[i].score = arr[i].score;
*/
	}
	arrInput((swap+idx), name, age, s_num, score);
/*
	strcpy_s(swap[idx].name, sizeof(arr[idx].name), name);
	swap[idx].age = age;
	swap[idx].s_num = s_num;
	swap[idx].score = score;
*/

	free(arr);

	return swap;
}

char grade(int score) {
	if (100 >= score && score > 89) return 'A';
	else if (score > 79) return 'B';
	else if (score > 69) return 'C';
	else if (score > 59) return 'D';
	else if (score > 49) return 'E';
	else if (score >= 0) return 'F';
	else return 'X';
}

/*
	���� �˻��ϴ� �Լ�.
	pk�� �̸��̹Ƿ� student* �� �̸����� ���� �� ������ �� student* �� ����.
*/
int searchIdxArr(student* arr, char* name, int idx) {
	
	int tagetIdx=0;
	for (int i = 0; i < idx; i++) {
		if (!strncmp(arr[i].name, name,sizeof(name))) {
			return tagetIdx;
		}
		tagetIdx++;
	}	
	return -1;
}

/*
	�Լ��� �ñ״�ó�� �����Ͽ� �����ϱ� ������ ����.
*/

void eachArrPrint(student each) {
	printf("�̸� : %s, ���� : %d, �й� : %d, ���� : %d, ���� : %c\n", each.name, each.age, each.s_num, each.score, grade(each.score));
}
/*
	void searchAllArr(student* arr,int idx) {
		for (int i = 0; i < idx; i++) {
			printf("�̸� : %s, ���� : %d, �й� : %d, ���� : %d, ���� : %c\n", arr[i].name, arr[i].age, arr[i].s_num, arr[i].score, grade(arr[i].score));
		}	
	}
*/

student* insertArr(student* arr, char* searchName, char* name, int age, int s_num, int score, int idx) {
	int targetIdx = searchIdxArr(arr, searchName, idx);
	arrInput((arr + targetIdx), name, age, s_num, score);
		/*
			strcpy_s(arr[targetIdx].name, sizeof(name), name);
			arr[targetIdx].age = age;
			arr[targetIdx].s_num = s_num;
			arr[targetIdx].score = score;
		*/
	return arr;
}

student* deleteArr(student* arr, char* name, int idx) {
	if (idx != 0) {
		student* swap = (student*)malloc(sizeof(student) * idx);

		int targetIdx = searchIdxArr(arr, name, idx);
		for (int i = 0; i < targetIdx; i++) {
			arrInput((swap + i), arr[i].name, arr[i].age, arr[i].s_num, arr[i].score);
			/*
						strcpy_s(swap[i].name, sizeof(arr[i].name), arr[i].name);
						swap[i].age = arr[i].age;
						swap[i].s_num = arr[i].s_num;
						swap[i].score = arr[i].score;
			*/
		}

		for (int i = targetIdx; i < idx - 1; i++) {
			int nextIndex = i + 1;
			arrInput((swap + i), arr[nextIndex].name, arr[nextIndex].age, arr[nextIndex].s_num, arr[nextIndex].score);
			/*
						strcpy_s(swap[i].name, sizeof(arr[nextIndex].name), arr[nextIndex].name);
						swap[i].age = arr[nextIndex].age;
						swap[i].s_num = arr[nextIndex].s_num;
						swap[i].score = arr[nextIndex].score;
			*/
		}
		free(arr);
		return swap;
	}
	else return NULL;
}

void writeArr(student* arr,int idx) {
	FILE* fp;
	if (0 == fopen_s(&fp, "..\\Desktop\\a.txt", "w+")) {
		for(int i = 0; i<idx;i++){
		fprintf(fp, "%s %d %d %d %c\n", arr[i].name, arr[i].age, arr[i].s_num, arr[i].score, grade(arr[i].score));
		}
	fclose(fp);
	}
}

student* readArr(student* arr,int *idx) {
	FILE* fp;
	char name[10];
	int age, s_num, score;
	if (0 == fopen_s(&fp, "..\\Desktop\\a.txt", "r")) { // fopen_s(������������ �ּҰ�,"������","���") 
		while (!feof(fp)){
			fscanf_s(fp, "%s %d %d %d %*c\n", &name,sizeof(name), &age, &s_num, &score);
			arr = createStudent(arr, name, age, s_num, score, *(idx));
			(*idx)++;
		}
	fclose(fp);
	}
	return arr;
}

int main() {
	student* arr = NULL;
	char name[10];
	int choice = 0, age = 0, s_num = 0, score = 0, idx = 0;
	enum { INPUT = 1, SEARCH, INSERT, DELETE, SAVE, OPEN, END, EACH = 1, ALL };

	while (1) {

		printf("\n====================================================\n");
		printf("1.�Է�, 2.�˻� 3.���� 4.���� 5.���� 6.�ҷ����� 7.����\n");
		printf("======================================================\n\n");
		scanf_s("%d", &choice);
		
		switch (choice) {
			case INPUT: {
				printf("�̸�, ����, �й�, ����\n");
				scanf_s("%s %d %d %d", name,sizeof(name), &age, &s_num, &score);
				arr = createStudent(arr, name, age, s_num, score, idx);
				idx++;
				break;
			}
			case SEARCH: {
				printf("1. ������ȸ 2. ��ü��ȸ\n\n");
				scanf_s("%d", &choice);
				switch (choice) {
					case EACH: {
						printf("��ȸ�� �̸��� �Է����ּ���.\n");
						scanf_s("%s", name, sizeof(name));
						if (searchIdxArr(arr, name, idx) >= 0) eachArrPrint(arr[searchIdxArr(arr, name, idx)]);
						else printf("��ȸ�� ���� �����ϴ�.\n");
						break; 
					}
					case ALL: {
//						searchAllArr(arr,idx);
						for (int i = 0; i < idx; i++) 	eachArrPrint(arr[i]);
						break;
					}
					default: printf("�߸������̽��ϴ�.\n\n");
				}
				break;
			}
			case INSERT: {
				char searchName[10];
				printf("������ �̸��� �����ּ���.\n");
				scanf_s("%s", searchName, sizeof(searchName));
				if (searchIdxArr(arr, searchName, idx) >= 0) {
					printf("������ �̸�, ����, �й�, ������ �����ּ���.\n");
					scanf_s("%s %d %d %d", name, sizeof(name), &age, &s_num, &score);
					insertArr(arr, searchName, name, age, s_num, score, idx);
					break;
				}
				else printf("�������� �ʴ� �̸��Դϴ�.\n"); break;
			}
			case DELETE: {
				if (idx > 0) {
					printf("���� �̸��� �Է����ּ���.\n");
					scanf_s("%s", name, sizeof(name));
					if (searchIdxArr(arr, name, idx) >= 0) {
						arr = deleteArr(arr, name, idx);
						idx--;
						break;
					}
					else printf("�������� �ʴ� �̸��Դϴ�.\n"); break;
				}
				else {
					printf("����� ���� �����ϴ�.\n");
					idx = 0; 
					break;
				}
			}
			case SAVE: {
				writeArr(arr,idx);
				break;
			}
			case OPEN: {
				arr = readArr(arr,&idx);
				break;
			}
			case END: {
				printf("���α׷��� �����մϴ�.");
				return 0;
			}
			default: printf("�߸������̽��ϴ�.\n");
		}
	}

	return 0;
}
