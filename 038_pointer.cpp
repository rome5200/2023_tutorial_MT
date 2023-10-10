#include <stdio.h>

int main() {
	int a = 10, b = 20;
	printf("a = %d\nb = %d\n", a, b);

	int* p_a = &a;
	int* p_b = &b;

	*p_a *= 2, *p_b *= 2;
	printf("===============\n");
	printf("a = %d\nb = %d\n", a, b);
	printf("*p_a = %d\n", *p_a);
	printf("*p_b = %d\n", *p_b);
}