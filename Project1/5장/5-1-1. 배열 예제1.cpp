#include<stdio.h>

int main() {
	// array
	int arr[] = { 3, 1, 4, 1, 5 };			// �迭�ȿ� ���� ���빰��ŭ �迭�� ũ��� �ڵ����� Ŀ����.


	// �迭�� ũ�⸦ ����� ��� : <= �ϰ�� 'sizeof(arr) / sizeof(int) -1', < �ϰ�� 'sizeof(arr) / sizeof(int)'�� �ִ´�.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

}