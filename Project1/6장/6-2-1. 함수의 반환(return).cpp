// return : 돌려주다, 반환

#include<stdio.h>

// 2개의 매개변수(정수)의 합을 반환
int plus(int a, int b) {
	return a + b;		// 결과를 호출했던 함수로 a + b 의 값을 돌려준다.
}



int main() {
	int sum = plus(3, 5);
	printf("%d\n", sum);

	// main 함수는 return선언이 없으면 자동으로 return 0;으로 선언한다.
}