/*
	�ڿ��� �Է¹޾� �� �ڿ����� ����� ��� ����ϴ� ���α׷��� ����� ������.
	�ڿ����� �Էµ��� �ʴ� ���� ó������ �ʾƵ� �˴ϴ�.

	����
	�ڿ��� �Է� : 12
	1, 2, 3, 4, 6, 12
*/

#include<stdio.h>

int main() {


	int answer;			
	
	scanf_s("%d", &answer);

	for (int i = 1; i <= answer; i++)
	{
		if (answer % i == 0) {
			printf(" %d", i);
		}
	}
	
}