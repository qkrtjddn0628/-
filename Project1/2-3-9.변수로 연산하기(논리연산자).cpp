#include<stdio.h>

int main()
{
	/*
		<논리 연산자의 종류>

		p && q		// p와 q가 모두 참일 때만 참, 그 외에는 거짓
		p || q		// p와 q중 하나라도 참일 때 참, 그 외에는 거짓
		!p			// p가 거짓이면 참, p가 참이면 거짓

	*/
	int a = 3;

	bool p = (a >= 1) && (a <= 10);		// a가 1 이상이고 10 이하다
	bool q = (a == 3) || (a == 7);		// a가 3이거나 7이다
	bool r = !q;					// q가 아니다 -> a가 3도 아니고 7도 아니다.

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

}