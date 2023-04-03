//#define _CRI_SECURE_NO_WARNINGS // 보안을 무시한다.
#include<stdio.h>

int main()
{
	////정수
	//int a, b;
	//
	//scanf_s("%d%d", &a, &b);	// &: 포인터
	////추가 : 2017 이후부턴 scanf에서 보안문제가 있어 scanf_s로 추가해서 사용해야 한다. 이렇게 하는 것을 추천
	//// 다른 방법 : 헤더 위치에 #define _CRI_SECURE_NO_WARNINGS를 추가하면 scanf에 보안이 안걸리고 사용할수있다. 번거로워 비추



	//int hap = a + b;
	//int cha = a - b;
	//int gop = a * b;
	//int mok = a / b;


	//printf("%d + %d = %d\n", a, b, hap);
	//printf("%d - %d = %d\n", a, b, cha);
	//printf("%d * %d = %d\n", a, b, gop);
	//printf("%d / %d = %d\n", a, b, mok);


	//int a, b;

	//scanf_s("%d%d", &a, &b);	// &: 포인터
	////추가 : 2017 이후부턴 scanf에서 보안문제(오버플로우)가 있어 scanf_s로 추가해서 사용해야 한다. 이렇게 하는 것을 추천
	//// 다른 방법 : 헤더 위치에 #define _CRI_SECURE_NO_WARNINGS를 추가하면 scanf에 보안이 안걸리고 사용할수있다. 번거로워 비추
	//

	
	//예제) 실수로 바꾸기
	float a, b;

	scanf_s("%f%f", &a, &b);	// &: 포인터


	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	/*
		double 를 입력받을때는% lf를 사용해야 한다.
		예)
			double d;
			scnaf_s("%lf", &d);
	*/
	
	

}