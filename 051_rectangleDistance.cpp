#include <stdio.h>
#include <math.h>
struct point {
	int x;
	int y;
};

struct rectangle {
	point p1;
	point p2;
};
double distance(point a, point b) {
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

int main() {
	point a, b;

	printf("p1의 x, y좌표를 입력하세요 : ");
	scanf_s("%d %d", &a.x, &a.y);

	printf("p2의 x, y좌표를 입력하세요 : ");
	scanf_s("%d %d", &b.x, &b.y);

	printf("두 점 사이의 거리 : %.1f", distance(a, b));
}