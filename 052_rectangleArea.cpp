#include <stdio.h>
#include <math.h>
struct Point {
	int x, y;
};

struct Rectangle {
	Point p1, p2;
};

double area(Point a, Point b){
	return (fabs(b.x - a.x) * fabs(b.y - a.y));
}

int main() {
	Point a, b;
	printf("p1의 x, y좌표를 입력하세요 : ");
	scanf_s("%d %d", &a.x, &a.y);
	printf("p1의 x, y좌표를 입력하세요 : ");
	scanf_s("%d %d", &b.x, &b.y);
	printf("사각형의 넓이 = %.1f", area(a, b));
}