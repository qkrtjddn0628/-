#include<stdio.h>

// call-by-value		:	값에 의한 호출
// call-by-reference	:	값에 의한 참조

void printArr(int *arr) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2;
	}
}

int main() {
	int arr[4] = { 1,2,3,4 };

	printArr(arr);

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}