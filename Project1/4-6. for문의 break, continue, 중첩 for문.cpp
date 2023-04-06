// break		: 반복문 한개를 빠져나옴
// continue
// 중첩 for문


// 숫자 입력 -> 숫자 출력
// 1번째 : 7
// 2번째 : 5
// ...
// 15번쨰때 출력하지 않고 끝내기

#include<stdio.h>

int main() {
	for (int i = 1; ; i++) {
		int k;
		scanf_s("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d번째 : %d\n", i, k);
	}
}