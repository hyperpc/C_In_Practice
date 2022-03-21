#include "demo.h"
/* calculate the perimeter of rectangle */
void perimeterOfRectangle() {
	int a, b, c;
	printf("Please input the length of rectangle:");
	scanf_s("%d", &a);
	printf("Please input the width of rectangle:");
	scanf_s("%d", &b);
	c = 2 * (a + b);
	printf("Perimeter of rectangle:%d.\n", c);
}