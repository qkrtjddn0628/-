#include<stdio.h>
#include<string.h>	// ���ڿ� ���� �Լ��� ����Ҷ� string.h ����� �߰�������Ѵ�.

// ���ڿ� ���� �˾ƺ���
int main() {
	char str1[] = "Hello";

	//int len;

	//len = strlen(str1);		// strlen : string.h �� ����ִ� �Լ� �� �ϳ�.

	//printf("���ڿ��� ���̴� %d\n", len);

	char str2[100];

	strcpy_s(str2, str1);
	//visual Studio�� ������ ���� �޶����� ������ strcpy�� scanf�� ���������� ������ ���ü��� �ִ�. �׷��Ƿ� ������ ���´ٸ� strcpy_s ��������.
	//strcpy(string copy) : �迭���� �迭�� �����ϴ� ��.

	printf("str�� �� : %s\n", str2);
	
}