#include<stdio.h>
#include<string.h>

int main() {
	char str1[] = "sample";
	char str2[] = "simple";

	int cmp = strcmp(str1, str2);

	printf("%d\n", cmp);

	// strcmp(string compare) : 함수는 사전순으로 문자열을 비교하는 역할을 합니다.
	// 앞 문자열과 뒤 문자열이 완벽히 일치할 경우0, 앞 문자열이 뒤 문자열보다 사전순으로 빠를 경우 음수, 늦을 경우 양수를 돌려줍니다.
}