/*
	두 실수(double)를 입력받아서 그 숫자들의 합을 구하는 프로그램을 만들어 보세요.

	예시
	두실수 입력: 3.14 9.8
	3.14 + 9.8 = 12.94

*/

#include<stdio.h>

int main()
{
	double a, b;			// 더블형 a,b 선언	


	printf("첫번째 실수를 입력해 주세요: \n");
	scanf_s("%lf", &a);

	printf("두번째 실수를 입력해 주세요: \n");
	scanf_s("%lf", &b);


	double sum = a + b;
	printf("결과\n");
	printf("%.2lf + %.2lf = %.2lf\n", a, b, sum);

}
/*
	scanf_S()의 ()안에는 \n를 사용하면 안된다.
*/