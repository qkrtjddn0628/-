/*
	���� ������ �Է¹޾� ������ ����ϴ� ���α׷��� ��������. 
	90~100���� A, 80~89���� B, 70~79���� C, 60~69���� D, 0~59���� F�� ���;� �մϴ�.
	�� 0~100 ������ ������ �Էµ��� ���� ��� "�߸��Է��ϼ̽��ϴ�."�� ����ؾ� �մϴ�.

	����
	���� �Է� : 89
	B
*/
#include<stdio.h>

int main()
{
	int answer;		// ���� ���� ���� ����

	printf("���� �Է�:");
	scanf_s("%d", &answer);

	if (0 > answer || answer > 100) { printf("�߸��Է��ϼ̽��ϴ�.\n"); }
	else if (answer >= 90) { printf("A\n"); }
	else if (answer >= 80) { printf("B\n"); }
	else if (answer >= 70) { printf("C\n"); }
	else if(answer >= 60) { printf("D\n"); }
	else { printf("F\n"); }
	
}