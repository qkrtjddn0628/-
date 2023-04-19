// call-by-value		:	���� ���� ȣ��
// call-by-reference	:	���� ���� ����

#include<stdio.h>

void swap(int *x, int *y) {
	int tmp = *x;		
	*x = *y;				
	*y = tmp;
}

int main() {
	// �ΰ��� ���� ���� �ٲ㺸��
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(&a,&b);

	printf("a = %d, b = %d\n", a, b);

}
/*
	<��>
	int tmp, a, b;

	- �ǿ뿡�� ���� ����
	int tmp = a;		// tmp�� a�� ���� �ְ�
	a = b;				// a�� b�� ���� �ִ´�
	b = tmp;			// �׸��� b�� a�� ���� �� tmp�� ���� �ִ´�.

*/