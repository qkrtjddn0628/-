/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� ��
	�� ptr�� �� ��ü�� ����Ű�� �������̰�,
	ptr�� 1�� ���� ������ �� ���� ���� ����Ų�ٰ� �����ϸ� �ȴ�.
*/


#include<stdio.h>

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	int (*ptr)[3] = arr;		// �迭 ������ ���� �� ���� 2���� �迭�� ���� ������ ���� �迭 �����Ͱ� �Ȱ��� 2���� �迭 ��Ȱ�� �Ѵ�.

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