/*
	체질링 지수(BM)는 다음과 같이 체중(kg)을 키(m)의 제곱으로 나눠서 구할 수 있습니다.

	BMI = (체중) / (키)^2

	체중과 키를 입력받은 후 체질량 지수를 구해 출력하는 프로그램을 만들어 보세요. 체중과 키는 double자료형에 저장해야 합니다.

	예시
	체중(kg) 입력 : 60
	키(m) 입력 : 1.7
	BMI: 20.761246
*/
#include<stdio.h>

int main()
{
	int kg;		//몸무게
	double m;	//키

	printf("몸무게 입력(kg) : ");
	scanf_s("%d", &kg);

	printf("키 입력(m) : ");
	scanf_s("%lf", &m);


	double BMI = (double)kg / (m * m);		// BMI = (체중) / (키)^2
	printf("결과(BMI) : %.6lf", BMI);

}