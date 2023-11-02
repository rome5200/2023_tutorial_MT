#include <stdio.h>

struct Student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

int main() {
	Student x;
	printf("학과 : ");
	scanf_s("%s", x.dept, 20);
	printf("학년 : ");
	scanf_s("%d", &x.year);
	printf("학번 : ");
	scanf_s("%d", &x.id);
	printf("이름 : ");
	scanf_s("%s", x.name, 20);
	printf("전화번호 : ");
	scanf_s("%s", x.phone, 20);

	printf("%s\n", x.dept);
	printf("%d\n", x.year);
	printf("%d\n", x.id);
	printf("%s\n", x.name);
	printf("%s\n", x.phone);
}