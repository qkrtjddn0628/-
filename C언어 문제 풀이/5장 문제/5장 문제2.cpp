/*
	���� �ڵ带 �������� ���� ��� ����� ������ ������.
*/
#include<stdio.h>

int main() {
	int a = 10;		// a�� 10����
	int b = 20;		// b�� 20����

	int* ptr;		// int�� ptr������ ����

	ptr = &a;		// ptr���� a�� �ּҸ� ����
	*ptr = 30;		// ������ ptr�� 30�� ����

	ptr = &b;		// ptr���� b �ּҸ� ����
	*ptr = 10;		// ������ ptr�� 10����

	printf("%d\n", a);		// 30
	printf("%d\n", b);		// 10
	printf("%d\n", *ptr);	// 10
}
