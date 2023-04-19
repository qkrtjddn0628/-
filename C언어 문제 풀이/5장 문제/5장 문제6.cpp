/*
	다음 코드를 실행했을 때의 출력 결과를 예측해 보세요. arr의 시작 주솟값은 100이라고 가정합니다.
*/

#include<stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n", &arr[0][0]);		// 100
									   
	printf("%d\n", arr[0] + 1);		// 104
	printf("%d\n", &arr[0] + 1);	// 112
	printf("%d\n", arr + 1);		// 112
	printf("%d\n", &arr + 1);		// 116

}