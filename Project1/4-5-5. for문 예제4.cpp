#include<stdio.h>

// 2^0 = 1
// 2^1 = 2
// 2^2 = 2
// ...
// 2^6 = 64

int main() {
	int n;
	scanf_s("%d", &n);


	for (int i = 0, t = 1; i <= n; i++, t *= 2) {
		printf("2^%d = %d\n", i, t);
	}
	// for문 ()에는 변수를 여러개를 넣을수 있다.

}