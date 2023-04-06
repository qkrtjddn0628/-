/*
	자연수 n을 입력받은 후, 다음과 같이 크기가 m인 숫자 삼각형을 출력해 보세요

	예시
	자연수 입력 : 4
	4 3 2 1
	3 2 1
	2 1
	1
*/

#include<stdio.h>

int main(){
	int a;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = a; j >= i; j--) {
			// 변수 선언한 j는 입력한 정수의a만큼 똑같은 값을 받는다.
			// 그리고 j는 a에서 i까지 반복을한다.
			// j가 i까지 도달했을때 j에서 정수 1을 빼고 남은 값을 다시 i만큼 반복한다. 
			printf(" %d", j);
		}
		printf("\n");
	}
}