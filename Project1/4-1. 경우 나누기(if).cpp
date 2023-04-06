#include<stdio.h>

int main()
{
	//입력 숫자가 짝수인지 홀수인지 만들어보기
	int a;
	scanf_s("%d", &a);

	if (a % 2 == 0) {				// if : 또는
		printf("a은 짝수\n");
	}
	else {							// else : 아닌 경우
		printf("a은 홀수\n");
	}

	

	// bool의 참, 거짓 참고
	// 참: 1, 거짓 : 0
	if (1) {
		printf("****\n");
	}
	else {
		printf("$$$$\n");
	}


	//else if : 또다른 if(새로운 조건)를 추가할때 사용, 여러개를 추가적으로 넣을수 있다.
	int n;
	scanf_s("%d", &n);

	if (n > 0) {
		printf("n은 양수\n");
	}
	else if (n == 0) {
		printf("n은 0\n");
	}
	else {
		printf("n은 음수\n");
	}

}