// �Է¹��� ���ڵ��� �ִ�, �ּ�

#include<stdio.h>

int main() {
	int n;
	int arr[100];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	//�ִ밪
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
		// max[0]�� ����� arr[i]�� ���빰�� ���κ��� max�� ���빰 ���� ������ max�迭�� ���Ӱ� ���Եǰ�, �ݴ�� ũ�� ���Ե��� �ʰ� �Ѵ�.
	}

	//�ּҰ�
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) max = arr[i];
		
	}


	printf("%d\n", max);
}