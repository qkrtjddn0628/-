#include<stdio.h>

// ������ ���� ����ȭ�� ����� ����
int main()
{
	int choice;

	makeChoice:		// goto ��������

	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("���� : 3\n");
	printf("ũ���� : 4\n");

	scanf_s("%d", &choice);

	switch (choice)	{
		case 1:
			printf("�� ����. \n");
			break;					// break : �ش� ������ ���빰�� �߰�ȣ ������ ������ �����Ѵ�.

		case 2:
			printf("�ҷ�����. \n");
			break;

		case 3:
			printf("����. \n");
			break;

		case 4:
			printf("ũ����. \n");
			break;
			
		default:					// default : ���ǿ� �ش���� �ʴ� ���� ����� ���, break���� ���� ���� �ʿ䰡 ����.
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			// goto : ���� ������ ���������� �ٽ� �ǵ����ִ� ����
			// ������ �ʹ� ���� ���� �ڵ尡 ���������� �ʰ� ���������� �ֱ� ������ ����ϴ� ���� �ظ��ؼ� �����Ѵ�.(���İ�Ƽ �ڵ�)
			goto makeChoice;
	}
	printf("***");
}