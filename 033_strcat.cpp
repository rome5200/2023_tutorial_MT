#include <stdio.h>
#include <string.h>
int main() {
	char grade[100], number[100], name[100];

	printf("학년 : ");
	scanf_s("%s", grade, sizeof(grade));
	printf("학번 : ");
	scanf_s("%s", number, sizeof(number));
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));
	
	strcat_s(grade, "학년 ");
	strcat_s(grade, number);
	strcat_s(grade, " ");
	strcat_s(grade, name);

	printf(grade);
}