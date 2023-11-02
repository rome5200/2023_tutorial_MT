#include <stdio.h>

struct Student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

void printInfo(Student x) {
	printf("%s\n", x.dept);
	printf("%d학년\n", x.year);
	printf("%d\n", x.id);
	printf("%s\n", x.name);
	printf("%s\n\n", x.phone);
}

int main() {
	Student x = { "의료IT공학과", 1, 23615092, "홍길동", "010-0000-0000" };
	Student y = { "의료IT공학과", 2, 22615092, "성춘향", "010-0000-0000" };
	Student z = { "의료IT공학과", 3, 21615092, "전우치", "010-0000-0000" };
	printInfo(x);
	printInfo(y);
	printInfo(z);
}