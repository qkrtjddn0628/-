#include<stdio.h>

int noMeaning() {
	printf("first\n");
	return 1;

	// ������ �ȵ�
	printf("second\n");
	return 2;
}

// c��� ���� return�� ������ �־ ù ��° ���ϸ� �����ϰ� ���� ����.


int main() {
	int a;
	a = noMeaning();

	printf("��ȯ�� �� : %d\n", a);
}


// �ڷ����� void �� ���(��ȯ���� ������ ���)
/*

void noMeaning() {
	printf("first\n");
	return;

	// ������ �ȵ�
	printf("second\n");
	return;
}
// �Լ��� �ڷ����� void �ϰ�� return�� ���� ���� ������ ��ȯ(����)�Ҽ� �ִ�.

int main() {
	noMeaning();
}
*/
