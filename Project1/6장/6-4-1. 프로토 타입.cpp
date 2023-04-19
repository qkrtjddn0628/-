// prototype : 원형, 시제품

#include<stdio.h>

/*
	호출만 하는 매개변수를 만들고
	나중에 호출한 매개변수에 관한 정의를 만드는 방법이다.
*/

void walk(int);	// 선언(함수 이름, 형, 매개변수만 적고 기능 구현은 안함)
void rotate(int);		// 선언(함수 이름, 형, 매개변수만 적고 기능 구현은 안함)
void drawSquare();			// 선언(함수 이름, 형, 매개변수만 적고 기능 구현은 안함)


int main() {
	drawSquare();		// 호출
	// 함수 호출을 할때 호출하는 함수가 호출받는 함수보다 위에 있어야 한다. 
}


// 정의 하기

// 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}


// 돌기
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}

