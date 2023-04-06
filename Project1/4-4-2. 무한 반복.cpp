// 무한 반복

#include<stdio.h>

int main() {
	int i = 1;

	while (true) {			// while의 ()에 true를 넣어주면 무한반복을 실행 시킬수 있다.
		printf("%d", i);
		i++;
	}
}