/*
	문제 제목 오류

	예시
	자연수 입력 : 4
	1
	1 2
	1 2 3
	1 2 3 4
*/

#include<stdio.h>

int main() {
	int a;

	scanf_s("%d", &a);
	
	for (int i = 1; i <= a; i++) {			// for문에 선언한 변수 i의 정수가 입력한 a의 정수만큼 반복 그리고 참일시 \n 실행
		for (int j = 1; j <= i; j++) {		// for문에 선언한 변수 j는 이전 for문의 i만큼 반복. 참일시 j의 정수를 출력
			printf("%d", j);
		}
		printf("\n");
	}

}