#include<stdio.h>

//변수는 {}밖에서도 선언할수 있다. = 전역변수
int itemCnt = 0;		// 보유하고 있는 아이템의 개수
int money = 100;		// 보유하고 있느 잔액



void buyItem() {		// 아이템을 살때 사용하는 함수
	// 아이템을 산다.
	itemCnt++;
	money -= 20;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}




// 자료형 함수 변수
int main() {					// main이라는 함수를 만듬
	int a;		// 지역변수

	buyItem();		// 선언한 특정 함수를 호출(선언)할수 있다.

	/*중략*/

	// 아이템을 산다.
	buyItem();

}

/* 
	<정리>
	
	이 코드를 호출했을때 호출한 내용을 알려주는 것이 함수 이다.
	
*/