#include "demo.h"

void perimeterOfSquare() {
	int a, b;
	printf("Please input the edge length of square:");
	scanf_s("%d", &a);
	b = 4 * a;
	printf("Perimeter of rectangle:%d.\n", b);
}