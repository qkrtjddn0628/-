// call-by-value		:	값에 의한 호출
// call-by-reference	:	값에 의한 참조

#include<stdio.h>

void swap(int *x, int *y) {
	int tmp = *x;		
	*x = *y;				
	*y = tmp;
}

int main() {
	// 두개의 값을 서로 바꿔보기
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(&a,&b);

	printf("a = %d, b = %d\n", a, b);

}
/*
	<팁>
	int tmp, a, b;

	- 실용에서 자주 쓰임
	int tmp = a;		// tmp에 a의 값을 넣고
	a = b;				// a에 b의 값을 넣는다
	b = tmp;			// 그리고 b에 a의 값이 들어간 tmp의 값을 넣는다.

*/