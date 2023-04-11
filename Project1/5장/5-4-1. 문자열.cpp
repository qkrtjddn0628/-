// 문자열 : 문자들이 열거

#include<stdio.h>

int main() {
	//char arr[] = "abc";
	char arr[] = { 'a', 'b', 'c', '\0'};
	/* \0 은 문자열의 끝이다 라는 표시이다.
	 문자열 중간에 \0을 선언하면 \0뒤에는 출력이 되지 않는다.*/

	// 문자 전체를 출력하고싶을땐 %s를 사용한다
	printf("%s\n", arr);

	printf("배열의 크기 : %d\n", sizeof(arr) / sizeof(char));

	printf("-------------------------------------------------------\n\n");

	char s[100];
	scanf_s("%s", s,99);
	//문자열 입력을 받을때는 s앞에 &을 추가하지 않는다.
	//scanf_s의 오류 : 문자 또는 문자열입력시 버퍼의 크기 -1의 크기를 입력해줘야한다.
	//null문자를 처리하기위해 마지막 자리는 빼주는 것 이다.
	// 참고 사이트 : https://codingducks.tistory.com/77

	printf("%s\n", s);

	return 0;
}