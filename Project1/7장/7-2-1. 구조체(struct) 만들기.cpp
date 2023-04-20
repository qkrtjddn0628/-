#include<stdio.h>
/*
	구조체란
	여러 변수를 한꺼번에 묶어서 만든 새로운 자료형이다.
	예)

	struct{float x, y} pos;

	여기에 들어간 pos는 typedef처럼 지어진 별칭이다.

*/



int main() {

	//typedef struct { int x, y; } Point;
	// 위와 같은 typedef 생략 하는 또 다른 방법
	struct Point { int x, y; } ;

	Point p;	

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));

}