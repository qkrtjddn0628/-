// 배열 포인터 : 배열을 가리키는 포인터
// 포인터 배열 : 포인터들이 배열

#include<stdio.h>

int main() {
	int arr[4] = { 1,2,3,4 };
	int* ptr[4];
	/*
		혼동 주의
		배열 포인터 : int (*ptr)[4];
		포인터 배열 : int *ptr[4];
		포인터 배열애 () 넣냐 안넣냐에 따라 달라진다.
	*/
	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
}