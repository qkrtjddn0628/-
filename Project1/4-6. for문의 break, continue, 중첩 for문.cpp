// break		: �ݺ��� �Ѱ��� ��������
// continue
// ��ø for��


// ���� �Է� -> ���� ���
// 1��° : 7
// 2��° : 5
// ...
// 15������ ������� �ʰ� ������

#include<stdio.h>

int main() {
	for (int i = 1; ; i++) {
		int k;
		scanf_s("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d��° : %d\n", i, k);
	}
}