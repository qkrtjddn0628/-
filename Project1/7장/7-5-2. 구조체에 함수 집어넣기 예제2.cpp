#include<stdio.h>

// 값 바꾸기

struct  Point
{
	int x, y;

	void moveRight() { x++; }
	void moveLeft() { x--; }
	void moveUp() { y++; }
	void moveDown() { y--; }
};

int main() {
	Point p = { 2,5 };

	p.moveDown();
	p.moveRight();

	printf("(%d, %d)", p.x, p.y);
}