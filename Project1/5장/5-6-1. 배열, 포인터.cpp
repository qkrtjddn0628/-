#include<stdio.h>

int main() {
	int a = 10;
	int* ptr_a = &a;

	printf("ptr_a�� �� : %d\n", ptr_a);
	printf("ptr_a + 1�� �� %d\n", ptr_a + 1);
	/*
		��� �ּҿ� 4�� ������ ����
		1�� �ڷ��� int�̰� int�� ����Ʈ�� 4�̴�.(ptr_a�� �ּ� + 1(int�� 4����Ʈ))
		�� �� �����Ͱ� ����Ű�� �ڷ����� ũ�⸸ŭ �������� �ȴ�.
	*/

}