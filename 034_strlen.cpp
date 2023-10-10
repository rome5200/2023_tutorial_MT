#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("입력 : ");
	scanf_s("%s", s, sizeof(s));

	printf("문자열의 길이 : %d", strlen(s));
}