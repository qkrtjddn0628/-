#include<stdio.h>

int main()
{
	// 컨트롤 + h : 단어 찾기

	/*
	// int : 32비트(4바이트), 정수를 담는 데 사용함
	int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;	// % :는 나머지를 출력하는 단어

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuji);
	// %만 적을시 컴퓨터는 다르게 해석할수 있기에 %를 출력하고싶으면 %%로 선언하면 된다.
	*/
	

	/*
	// 부동소수점(floating point)
	// float : 32비트(4바이트), 실수를 담는 데 쓰임 하지만 실수를 담기엔 크기가 작음
	float a = 5;
	float b = 3;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	*/

	// double: 64비트(8바이트), 실수를 담는 데 쓰임 float 보다는 담는 크기가 큼
	double a = 5;
	double b = 3;

	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	
	
}