// typedef
// 형을 정의 (자료형에 별칭 붙히기)

#include<stdio.h>

int main() {
	typedef int Int32;	// 자료형 정의
	Int32 n = 20;			// Int32

	printf("%d\n", n);
	printf("%d\n", sizeof(Int32));

}