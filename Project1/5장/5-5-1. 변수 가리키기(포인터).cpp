// 포인터(pointer) : 변수의 주소를 저장하는 변수

#include<stdio.h>

int main() {
	int a = 20;

	int *ptr_a;		// 포인터로 선언한 변수는 앞에 *를 추가한다. 예) 자료형 *변수;

	ptr_a = &a;		// & : 해당 변수의 주소 값

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
	// printf()에 사용한 *ptr_a경우는 말그대로 ptr_a가 가리키는 변수의 값으로 보면된다.
}