// 재귀 함수
// recursion
#include<stdio.h>


void rec(int n) {
	if (n > 5)return;
	printf("n = %d\n", n);
	rec(n+1);

	
}

int main() {
	rec(1);
}


// 실행후 무한반복 강제 멈추는 단축키 : ctrl + c