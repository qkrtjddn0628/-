#include<stdio.h>

int main() {
	// 1~n���� ������ ���� ����ϴ� ���α׷� �����

	int n;
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;	// sum = sum + i;
	}
	
	printf('%d\n', sum);
}