/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� ��
*/

#include<stdio.h>

int main() {
	int arr[3] = { 1,2,3 };

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr);
	printf("&arr + 1 = %d\n", &arr + 1);

	// arr�� 12�� ������ ����
	// arr[3]�� ũ��� 12�̱� ������ 12�� ������ �� �̴�.

}