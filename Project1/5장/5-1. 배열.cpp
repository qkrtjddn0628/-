#include<stdio.h>

int main() {
	int a[5];			// [] �ȿ� �迭ũ�⸦ �������ش�. �ڷ��� ����[�迭 ũ��];
						// �迭 ��ũ�� ������ 0���� �����Ѵ�.


	/*a[0] = 2;
	a[1] = 3;
	a[2] = 7;
	a[3] = 6;
	a[4] = 8;*/

	for (int i = 0; i <= 4; i++) {
		a[i] = i * 5;
	}

	/*printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);*/

	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}

}