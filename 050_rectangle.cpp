#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	point p1;
	point p2;
};
double distance(point a, point b) {
	return ((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}