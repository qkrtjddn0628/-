// ��ø if��
// �߰�ȣ �ڵ� ��Ÿ��


#include<stdio.h>
int main() {

	int a, b, c;

	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) printf("%d\n", a);		
		else  // c >  a
			printf("%d\n", c);
		// �� ���� ��
		// if�� �ȿ� ;�� �ϳ��� ������ �߰�ȣ�� �E���ִ�.
	}
	else if ( b > c ){
			printf("%d\n", b);
	}
	else {	// c > b
		printf("%d\n", c);
	}	

	
}