#include<stdio.h>
#include<string.h>

int main() {
	char str1[] = "sample";
	char str2[] = "simple";

	int cmp = strcmp(str1, str2);

	printf("%d\n", cmp);

	// strcmp(string compare) : �Լ��� ���������� ���ڿ��� ���ϴ� ������ �մϴ�.
	// �� ���ڿ��� �� ���ڿ��� �Ϻ��� ��ġ�� ���0, �� ���ڿ��� �� ���ڿ����� ���������� ���� ��� ����, ���� ��� ����� �����ݴϴ�.
}