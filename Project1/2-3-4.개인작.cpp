#include<stdio.h>

int main()
{
	//���� : korean		/k
	//���� : math		/m
	//���� : english		/e
	//���� : Science		/s
	//���� : sum			/sum
	//��� : avg			/avg

	double k = 80.1, m = 70.3, e = 78.5, s = 91.2;

	double sum = k + m + e + s;
	//int avg = (int)sum / 4;
	double avg = sum / 4;

	printf("A�л��� ������ %.2f �Դϴ�\n", avg);
	/*
		 �Ҽ��� �ڸ��� ���� ���
		 %.?f���� ?�� ���� ���ϴ� �Ҽ��� �ڸ� ���ڸ� ������ �ȴ�
			��)
			- �Ҽ��� 2�ڸ��� ���� ����ϱ�
				%.2f
			- �Ҽ��� 4�ڸ��� ���� ����ϱ�
				%.4f	

		������ float�� double������ ��밡��
	*/
}