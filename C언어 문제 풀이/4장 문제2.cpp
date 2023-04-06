/*
	자연수 입력받아 그 자연수의 약수를 모두 출력하는 프로그램을 만들어 보세요.
	자연수가 입력되지 않는 경우는 처리하지 않아도 됩니다.

	예시
	자연수 입력 : 12
	1, 2, 3, 4, 6, 12
*/

#include<stdio.h>

int main() {


	int answer;			
	
	scanf_s("%d", &answer);

	for (int i = 1; i <= answer; i++)
	{
		if (answer % i == 0) {
			printf(" %d", i);
		}
	}
	
}