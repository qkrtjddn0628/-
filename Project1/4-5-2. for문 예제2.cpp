#include<stdio.h>

int main() {
	// 1~n까지 숫자의 합을 출력하는 프로그렘 만들기

	int n;
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;	// sum = sum + i;
	}
	
	printf('%d\n', sum);
}