/*
	다음 코드를 실행했을 떄의 출력 결과를 예측해 보세요. arr의 시작 주솟값은 100이라고 가정합니다.
*/

#include<stdio.h>

int main() {
	int arr[3][3] = { 0 };			// 행 열 9개 칸 전부다 0으로 된다. {0,0,0}{0,0,0}{0,0,0}

	printf("%d\n", &arr);			// 100 
	printf("%d\n", arr);			// 100 
	printf("%d\n", *arr);			// 100
									   
									   
	printf("%d\n", &arr[0]);		// 100
	printf("%d\n", arr[0]);			// 100
	printf("%d\n", *arr[0]);		// 0
									   
	printf("%d\n", &arr[0][0]);		// 100

	printf("%d\n", arr[0][0]);		// 0
}