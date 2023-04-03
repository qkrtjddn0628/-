#include<stdio.h>

int main()
{
	//국어 : korean		/k
	//수학 : math		/m
	//영어 : english		/e
	//과학 : Science		/s
	//통합 : sum			/sum
	//평균 : avg			/avg

	double k = 80.1, m = 70.3, e = 78.5, s = 91.2;

	double sum = k + m + e + s;
	//int avg = (int)sum / 4;
	double avg = sum / 4;

	printf("A학생의 성적은 %.2f 입니다\n", avg);
	/*
		 소수점 자릿수 조절 방법
		 %.?f에서 ?에 내가 원하는 소수점 자리 숫자를 넣으면 된다
			예)
			- 소수점 2자릿수 까지 출력하기
				%.2f
			- 소수점 4자릿수 까지 출력하기
				%.4f	

		변수가 float와 double에서만 사용가능
	*/
}