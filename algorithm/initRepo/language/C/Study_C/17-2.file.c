#include <stdio.h>

#include "17-2.human.h";
#include "17-2.str.h";

struct Human Create_Human(char* name, int age, int gender) {
	struct Human human;

	human.age = age;
	human.gender = gender;
	copy_str(human.name, name);

	return human;
}

int Print_human(struct Human* human) {
	printf("%s ", human->name);
	printf("%d ", human->age);
	if (human->gender == male) {
		printf("����\n");
	}
	else {
		printf("����\n");
	}
	return 0;
}