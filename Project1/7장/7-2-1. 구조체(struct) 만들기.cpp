#include<stdio.h>
/*
	����ü��
	���� ������ �Ѳ����� ��� ���� ���ο� �ڷ����̴�.
	��)

	struct{float x, y} pos;

	���⿡ �� pos�� typedefó�� ������ ��Ī�̴�.

*/



int main() {

	//typedef struct { int x, y; } Point;
	// ���� ���� typedef ���� �ϴ� �� �ٸ� ���
	struct Point { int x, y; } ;

	Point p;	

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));

}