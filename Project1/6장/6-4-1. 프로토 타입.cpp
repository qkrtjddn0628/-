// prototype : ����, ����ǰ

#include<stdio.h>

/*
	ȣ�⸸ �ϴ� �Ű������� �����
	���߿� ȣ���� �Ű������� ���� ���Ǹ� ����� ����̴�.
*/

void walk(int);	// ����(�Լ� �̸�, ��, �Ű������� ���� ��� ������ ����)
void rotate(int);		// ����(�Լ� �̸�, ��, �Ű������� ���� ��� ������ ����)
void drawSquare();			// ����(�Լ� �̸�, ��, �Ű������� ���� ��� ������ ����)


int main() {
	drawSquare();		// ȣ��
	// �Լ� ȣ���� �Ҷ� ȣ���ϴ� �Լ��� ȣ��޴� �Լ����� ���� �־�� �Ѵ�. 
}


// ���� �ϱ�

// �ȱ�
void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}


// ����
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 1; i <= 4; i++) {
		walk(10);
		rotate(90);
	}
}

