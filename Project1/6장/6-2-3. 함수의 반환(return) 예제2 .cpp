#include<stdio.h>
// ���� �����ϴ� ���

//������ {}�ۿ����� �����Ҽ� �ִ�. = ��������
int itemCnt = 0;		// �����ϰ� �ִ� �������� ����
int money = 100;		// �����ϰ� �ִ� �ܾ�


int buyItem(int cost, int cnt) {
	
	if (money < cost) {
		printf("�ܾ��� �����մϴ�.\n");
		return -1;
	}
	// ������ �����ϸ� return -1�� ����ǰ�, �Ҹ����Ǹ� �Ʒ� �ڵ�� �Ѿ�� �ȴ�.

	itemCnt += cnt;			// item = item + cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("  ������ ���� : %d\n", itemCnt);
	printf("  �ܾ� : %d\n", money);
	
	return 0;
		
	
}

int main() {					// main�̶�� �Լ��� ����
	int result;			// ���� �����ϴ� ����
	
	
	result = buyItem(3000, 5);	// boyItem�ȿ� cost�� 30�� 5�̶�� ������ �ϰ� �ȴ�.


	/*�߷�*/

	if (result == -1) {
		printf("���� �����մϴ�.\n");
	}


	buyItem(50, 7);

}