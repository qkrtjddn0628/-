// 입력받은 숫자들의 최대, 최소

#include<stdio.h>

int main() {
	int n;
	int arr[100];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	//최대값
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
		// max[0]의 내용과 arr[i]의 내용물을 서로비교해 max의 내용물 보다 작으면 max배열에 새롭게 대입되고, 반대로 크면 대입되지 않게 한다.
	}

	//최소값
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) max = arr[i];
		
	}


	printf("%d\n", max);
}