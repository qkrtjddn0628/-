#include<stdio.h>
#include<string.h>	// 문자열 관련 함수를 사용할때 string.h 헤더를 추가해줘야한다.

// 문자열 길이 알아보기
int main() {
	char str1[] = "Hello";

	// strcat(string concatenate) : "concatenate"는 "이어 붙이다" 라는 뜻으로 이 함수를 사용하면 문자열 두 개를 쉽게 이을 수 있다.
	// 첫번째 문자열을 작성하고 그 문자열 뒤에 " "(띄워쓰기)를 추가한다. 
	// 그리고 strcat에는 넣을려는 문자열을 정하고 넣을 내용르 추가적으로 넣어주면된다.
	char str[100] = "Hello ";
	strcat_s(str, "World!");
	// 결과 출력 : Hello World!
	// strcat도 visual Studio의 버전에 따라 에러가 나올수 있으므로 에러가 나올시 strcat_s로 수정한다.
	printf("%s\n", str);



	/*
		주의 할점

		이 함수를 사용할때는 원본 문자열의 길이가 대상 문자열의 칸수를 넘으면 안 된다.
		그리고 원본 문자열의 \0 도 같이 포함되어 버린다.
		이런 작업은 버그와 보안상의 문제가 될 원인중 하나가 될수 있다.

		이런 문제를 해결 할려면 "strncat" 으로 사용해야한다.

		"strncpy"는 말 그대로 최대 n칸만 복사하라는 뜻이고, "strncat"는 최대 n글자만 복사하라는 뜻이다.

	*/
	// strncpy 사용법
	strncpy_s(str, "Hello world", sizeof(str));	// str의 칸수를 넘어 복사되지 않는다.

	// strncat 사용법
	strncat_s(str, "Doodle", sizeof(str) - strlen(str) - 1);	// 추가된 결과 문자열이 str의 칸수를 넘어가지 않는다.

}
