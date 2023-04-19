#include<stdio.h>
// 값을 저장하는 방법

//변수는 {}밖에서도 선언할수 있다. = 전역변수
int itemCnt = 0;		// 보유하고 있는 아이템의 개수
int money = 100;		// 보유하고 있느 잔액


int buyItem(int cost, int cnt) {
	
	if (money < cost) {
		printf("잔액이 부족합니다.\n");
		return -1;
	}
	// 조건이 만족하면 return -1이 실행되고, 불만족되면 아래 코드로 넘어가게 된다.

	itemCnt += cnt;			// item = item + cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("  아이템 개수 : %d\n", itemCnt);
	printf("  잔액 : %d\n", money);
	
	return 0;
		
	
}

int main() {					// main이라는 함수를 만듬
	int result;			// 값을 저장하는 변수
	
	
	result = buyItem(3000, 5);	// boyItem안에 cost는 30과 5이라는 선언을 하게 된다.


	/*중략*/

	if (result == -1) {
		printf("돈이 부족합니다.\n");
	}


	buyItem(50, 7);

}