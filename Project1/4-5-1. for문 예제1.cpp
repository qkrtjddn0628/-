#include<stdio.h>

int main() {
	// 1, 2, 4, 8, 16, 32,...

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i = i * 2) {	
		printf("%d\n", i);
		// 괄호 및 중괄호 안에 선언한 변수는 괄호 및 중괄호 안에서만 사용이 가능하다.그 밖으로 꺼내서 쓸수가 없다.
	}
}