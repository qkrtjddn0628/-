#include<stdio.h>

//변수는 {}밖에서도 선언할수 있다. = 전역변수
int itemCnt = 0;		// 보유하고 있는 아이템의 개수
int money = 100;		// 보유하고 있느 잔액




void buyItem(int cost, int cnt) {		// 함수()안에 변수 선언하는 것을 매개변수라고 부른다. 여러개 변수 선언도 가능
	// 아이템을 산다.
	itemCnt += cnt;			// item = item + cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
}





int main() {					// main이라는 함수를 만듬

	int a;		// 지역변수

	buyItem(30, 5);	// boyItem안에 cost는 30과 5이라는 선언을 하게 된다.


	/*중략*/

	buyItem(50, 7);
	
}