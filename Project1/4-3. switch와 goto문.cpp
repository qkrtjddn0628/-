#include<stdio.h>

// 간단한 게임 메인화면 만들어 보기
int main()
{
	int choice;

	makeChoice:		// goto 시작지점

	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");

	scanf_s("%d", &choice);

	switch (choice)	{
		case 1:
			printf("새 게임. \n");
			break;					// break : 해당 조건의 내용물을 중괄호 밖으로 꺼내서 전달한다.

		case 2:
			printf("불러오기. \n");
			break;

		case 3:
			printf("설정. \n");
			break;

		case 4:
			printf("크레딧. \n");
			break;
			
		default:					// default : 조건에 해당되지 않는 것이 실행될 경우, break문은 굳이 넣을 필요가 없다.
			printf("잘못 입력하셨습니다.\n");
			// goto : 임의 설정한 구간쪽으로 다시 되돌려주는 문구
			// 하지만 너무 많이 쓰면 코드가 직관적이지 않고 복잡해질수 있기 떄문에 사용하는 것을 왠만해서 자제한다.(스파게티 코드)
			goto makeChoice;
	}
	printf("***");
}