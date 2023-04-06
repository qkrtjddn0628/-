// continue
// 루프가 많아도 그냥 건너뜀
// 현제 돌고있는 루프를 한번 건너뛴다는 의미
// 잘 사용하지는 않음

#include<stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	// 1+2+4+5+7+8+10+11+13

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if(i %3!=0){
			sum += i;
		}
	}
	printf("%d\n", sum);
}