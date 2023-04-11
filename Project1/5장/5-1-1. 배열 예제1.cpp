#include<stdio.h>

int main() {
	// array
	int arr[] = { 3, 1, 4, 1, 5 };			// 배열안에 넣은 내용물만큼 배열의 크기는 자동으로 커진다.


	// 배열의 크기를 계산할 경우 : <= 일경우 'sizeof(arr) / sizeof(int) -1', < 일경우 'sizeof(arr) / sizeof(int)'을 넣는다.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

}