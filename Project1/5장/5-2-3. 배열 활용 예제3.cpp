// �Է¹��� ���ڵ��� ¦�� ������ ���ϱ�

#include<stdio.h>

int main() {
	int n;
	int arr[100];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	// cnt : ī��Ʈ
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
			// arr �迭�� ���빰�� ���������� 0���� �������� ¦���� ó���� cnt�� ī���͸� 1�� �÷��ش�.
		}
	}

	printf("%d\n", cnt);
}