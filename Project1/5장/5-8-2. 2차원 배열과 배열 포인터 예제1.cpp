/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값
	즉 ptr은 행 전체를 가리키는 포인터이고,
	ptr에 1을 더할 때마다 그 다음 행을 가리킨다고 이해하면 된다.
*/


#include<stdio.h>

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	int (*ptr)[3] = arr;		// 배열 포인터 만들어서 그 값에 2차원 배열을 집어 넣으면 만든 배열 포인터가 똑같은 2차원 배열 역활을 한다.

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr 

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}