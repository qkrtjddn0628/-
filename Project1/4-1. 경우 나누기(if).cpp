#include<stdio.h>

int main()
{
	//�Է� ���ڰ� ¦������ Ȧ������ ������
	int a;
	scanf_s("%d", &a);

	if (a % 2 == 0) {				// if : �Ǵ�
		printf("a�� ¦��\n");
	}
	else {							// else : �ƴ� ���
		printf("a�� Ȧ��\n");
	}

	

	// bool�� ��, ���� ����
	// ��: 1, ���� : 0
	if (1) {
		printf("****\n");
	}
	else {
		printf("$$$$\n");
	}


	//else if : �Ǵٸ� if(���ο� ����)�� �߰��Ҷ� ���, �������� �߰������� ������ �ִ�.
	int n;
	scanf_s("%d", &n);

	if (n > 0) {
		printf("n�� ���\n");
	}
	else if (n == 0) {
		printf("n�� 0\n");
	}
	else {
		printf("n�� ����\n");
	}

}