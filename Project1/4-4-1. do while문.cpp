// do-while

#include<stdio.h>

int main() {
	int n;

	do {		// 변수의 정의가 되어있는 상태에서 특정 입력이나 조건을 만족하기 전까지 계속 반복
		printf("제발 0을 입력해주세요!!\n", n);
		scanf_s("%d", &n);
	} while (n != 0);

	// 0을 입력할시
	printf("드디어 0을 입력하셨군요!\n");

}