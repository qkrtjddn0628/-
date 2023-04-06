// 중첩 if문
// 중괄호 코딩 스타일


#include<stdio.h>
int main() {

	int a, b, c;

	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) printf("%d\n", a);		
		else  // c >  a
			printf("%d\n", c);
		// 줄 정리 팁
		// if문 안에 ;이 하나만 있으면 중괄호를 뺼수있다.
	}
	else if ( b > c ){
			printf("%d\n", b);
	}
	else {	// c > b
		printf("%d\n", c);
	}	

	
}