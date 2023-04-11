// 입력받은 숫자들의 짝수 개수를 구하기

#include<stdio.h>

int main() {
	int n;
	int arr[100];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	// cnt : 카운트
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
			// arr 배열속 내용물의 나머지값이 0으로 떨어질때 짝수로 처리해 cnt의 카운터를 1식 늘려준다.
		}
	}

	printf("%d\n", cnt);
}