#include<stdio.h>

int main() {
	int a = 10;
	int* ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 %d\n", ptr_a + 1);
	/*
		결과 주소에 4가 더해진 이유
		1는 자료형 int이고 int의 바이트는 4이다.(ptr_a의 주소 + 1(int는 4바이트))
		즉 그 포인터가 가리키는 자료형의 크기만큼 더해지게 된다.
	*/

}