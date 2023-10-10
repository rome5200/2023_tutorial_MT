#include <stdio.h>
#include <string.h>

int main(){
	char a[10], b[10], c[10];
	printf("입력: ");
	scanf_s("%s", a, sizeof(a));
	printf("입력: ");
	scanf_s("%s", b, sizeof(b));
	printf("입력: ");
	scanf_s("%s", c, sizeof(c));

	if (strcmp(a, b) < 0) {
		if (strcmp(b, c) < 0)
			printf("%s %s %s\n", a, b, c); // a, b, c
		else if (strcmp(a, c) < 0)
			printf("%s %s %s\n", a, c, b);	// a, c, b
		else
			printf("%s %s %s\n", c, a, b);	// c, a, b
	}
	else {
		if (strcmp(a, c) < 0)
			printf("%s %s %s\n", b, a, c); // b, a, c
		else if (strcmp(b, c) < 0)
			printf("%s %s %s\n", b, c, a);// b, c, a
		else
			printf("%s %s %s\n", c, b, a);//c, b, a
	}
}