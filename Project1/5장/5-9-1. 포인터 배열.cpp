// �迭 ������ : �迭�� ����Ű�� ������
// ������ �迭 : �����͵��� �迭

#include<stdio.h>

int main() {
	int arr[4] = { 1,2,3,4 };
	int* ptr[4];
	/*
		ȥ�� ����
		�迭 ������ : int (*ptr)[4];
		������ �迭 : int *ptr[4];
		������ �迭�� () �ֳ� �ȳֳĿ� ���� �޶�����.
	*/
	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
}