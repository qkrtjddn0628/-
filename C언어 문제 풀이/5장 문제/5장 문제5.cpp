/*
	���� �ڵ带 �������� ���� ��� ����� ������ ������. arr�� ���� �ּڰ��� 100�̶�� �����մϴ�.
*/

#include<stdio.h>

int main() {
	int arr[3][3] = { 0 };			// �� �� 9�� ĭ ���δ� 0���� �ȴ�. {0,0,0}{0,0,0}{0,0,0}

	printf("%d\n", &arr);			// 100 
	printf("%d\n", arr);			// 100 
	printf("%d\n", *arr);			// 100
									   
									   
	printf("%d\n", &arr[0]);		// 100
	printf("%d\n", arr[0]);			// 100
	printf("%d\n", *arr[0]);		// 0
									   
	printf("%d\n", &arr[0][0]);		// 100

	printf("%d\n", arr[0][0]);		// 0
}