#include<stdio.h>

//������ {}�ۿ����� �����Ҽ� �ִ�. = ��������
int itemCnt = 0;		// �����ϰ� �ִ� �������� ����
int money = 100;		// �����ϰ� �ִ� �ܾ�




void buyItem(int cost, int cnt) {		// �Լ�()�ȿ� ���� �����ϴ� ���� �Ű�������� �θ���. ������ ���� ���� ����
	// �������� ���.
	itemCnt += cnt;			// item = item + cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
}





int main() {					// main�̶�� �Լ��� ����

	int a;		// ��������

	buyItem(30, 5);	// boyItem�ȿ� cost�� 30�� 5�̶�� ������ �ϰ� �ȴ�.


	/*�߷�*/

	buyItem(50, 7);
	
}