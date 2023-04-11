#include<stdio.h>
#include<string.h>	// 문자열 관련 함수를 사용할때 string.h 헤더를 추가해줘야한다.

// 문자열 길이 알아보기
int main() {
	char str1[] = "Hello";

	//int len;

	//len = strlen(str1);		// strlen : string.h 에 들어있는 함수 중 하나.

	//printf("문자열의 길이는 %d\n", len);

	char str2[100];

	strcpy_s(str2, str1);
	//visual Studio의 버전에 따라 달라질수 있지만 strcpy도 scanf와 마찬가지로 오류가 나올수가 있다. 그러므로 오류가 나온다면 strcpy_s 수정하자.
	//strcpy(string copy) : 배열에서 배열로 복사하는 것.

	printf("str의 값 : %s\n", str2);
	
}