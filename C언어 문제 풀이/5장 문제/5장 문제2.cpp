/*
	다음 코드를 실행했을 때의 출력 결과를 예측해 보세요.
*/
#include<stdio.h>

int main() {
	int a = 10;		// a에 10대입
	int b = 20;		// b에 20대입

	int* ptr;		// int형 ptr포인터 선언

	ptr = &a;		// ptr에는 a의 주소를 대입
	*ptr = 30;		// 포인터 ptr에 30을 대입

	ptr = &b;		// ptr에는 b 주소를 대입
	*ptr = 10;		// 포인터 ptr에 10대입

	printf("%d\n", a);		// 30
	printf("%d\n", b);		// 10
	printf("%d\n", *ptr);	// 10
}
