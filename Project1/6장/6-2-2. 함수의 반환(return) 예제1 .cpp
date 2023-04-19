#include<stdio.h>

int noMeaning() {
	printf("first\n");
	return 1;

	// 수행이 안됨
	printf("second\n");
	return 2;
}

// c언어 에선 return을 여러개 넣어도 첫 번째 리턴만 수행하고 끝을 낸다.


int main() {
	int a;
	a = noMeaning();

	printf("반환된 값 : %d\n", a);
}


// 자료형이 void 일 경우(반환값이 없을때 사용)
/*

void noMeaning() {
	printf("first\n");
	return;

	// 수행이 안됨
	printf("second\n");
	return;
}
// 함수의 자료형이 void 일경우 return에 값을 적지 않으면 반환(종료)할수 있다.

int main() {
	noMeaning();
}
*/
