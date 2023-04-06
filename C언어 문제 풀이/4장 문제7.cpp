/*
	자연수 n을 입력받은 후, 다음과 같이 크기가 n인 숫자 삼각형을 출력해 보세요.

	예시
	자연수 입력 : 4
	1
	1 3
	1 3 5
	1 3 5 7
*/
#include<stdio.h>
int main() {
	int a;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" %d", 2*j-1);
		}
		printf("\n");
	}
}
// 결과 출력때 j의 정수는 +2배로 올라야 하기떄문에 printf의 j변수에 2*j-1를 추가하였다.