/*
	100개 이하의 정수를 입력받아 첫 줄에 짝수 번째 숫자들을 출력하고 다음 줄에 홀수 번째 숫자들을
	순서대로 출력하는 프로그램을 만들어 보세요.

	예시)

	숫자의 개수 입력 : 7
	숫자 입력 : 3 1 4 1 5 9 2
	1 1 9
	3 4 5 2
*/
#include<stdio.h>

int main() {
	int a;
	int arr[1000];

	printf("숫자의 개수 입력 : ");
	scanf_s("%d", &a);

	// 숫자 입력 받기
	printf("숫자 입력 : ");
	for (int i = 0; i < a; i++) {
		scanf_s("%d", &arr[i]);
	}

	// 입력한 숫자 순서가 짝수 번째 일시 출력하기
	for (int i = 1; i < a; i+=2) {		// i +=2 -> i = i + 2
		printf("%d ", arr[i]);		
	}
	



	printf("\n");
	// 입력한 숫자 순서가 홀수 번째 위치 출력하기
	for (int i = 0; i < a; i += 2) {
		printf("%d ", arr[i]);
	}



}

