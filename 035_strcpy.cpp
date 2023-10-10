#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	char t[100];
	printf("입력 : ");
	scanf_s("%s", s, sizeof(s));

	strcpy_s(t, s);

	printf("%s", t);
}