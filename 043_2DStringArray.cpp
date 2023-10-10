#include <stdio.h>

int main() {
	char str[4][20];
	char major[20], grade[20], number[20], name[20];

	printf("학과 : ");
	scanf_s("%s", major, sizeof(major));
	printf("학년 : ");
	scanf_s("%s", grade, sizeof(grade));
	printf("학번 : ");
	scanf_s("%s", number, sizeof(number));
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	char* ptr[4] = { major, grade, number, name };

	for (int i = 0; i < 4; i++)
		str[i][0] = *ptr[i];
	
	for (int i = 0; i < 4; i++)
		printf("%s\n", str[i]);
}