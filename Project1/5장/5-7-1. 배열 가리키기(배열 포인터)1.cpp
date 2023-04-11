#include<stdio.h>

int main() {
	int arr[10] = { 1,2,3 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	// arr[i] == *(arr + i) == *(ptr + i) == *(i + ptr) == i[ptr]
	// a[b] -> *(a + b)

	for (int i = 0; i < 3; i++) {
		printf("%d ", i[ptr]);		// �ǹ����� �� ������ �ʴ� ���
	}
	printf("\n");
}