#include<stdio.h>

int main()
{
	int a;	// 변수가 만들어지는 과정을 "선언"이라고 부름

	a = 3;	// = : "대입"이라고 부름
	printf("%d\n", a);

	a = 5;	// 대입
	printf("%d\n", a);

	int c = 2; // 초기화
	int d = 3;

	printf("%d + %d = %d\n", c, d, c + d);

	// 변수 이름 : 알파벳 대소문자, _, 숫자(첫번째 글자로는 사용 불가)로 사용 가능
	int abc;
	//int 2a;	// 이름선언할때 숫자는 첫번째로 사용할수 없다
	int a2;
	int _under_score;
	int _;


	// 또다른 이름 선언
	int a = 2;
	int b = 3;
	int hap = a + b;


	printf("%d + %d = %d", a, b, hap);

}