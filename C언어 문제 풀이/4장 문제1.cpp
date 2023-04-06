/*
	시험 점수를 입력받아 학점을 계산하는 프로그램을 만들어보세요. 
	90~100점은 A, 80~89점은 B, 70~79점은 C, 60~69점은 D, 0~59점은 F가 나와야 합니다.
	또 0~100 사이의 정수가 입력되지 않은 경우 "잘못입력하셨습니다."를 출력해야 합니다.

	예시
	점수 입력 : 89
	B
*/
#include<stdio.h>

int main()
{
	int answer;		// 시험 점수 변수 선언

	printf("점수 입력:");
	scanf_s("%d", &answer);

	if (0 > answer || answer > 100) { printf("잘못입력하셨습니다.\n"); }
	else if (answer >= 90) { printf("A\n"); }
	else if (answer >= 80) { printf("B\n"); }
	else if (answer >= 70) { printf("C\n"); }
	else if(answer >= 60) { printf("D\n"); }
	else { printf("F\n"); }
	
}