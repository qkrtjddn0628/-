/*
	�� �Ǽ�(double)�� �Է¹޾Ƽ� �� ���ڵ��� ���� ���ϴ� ���α׷��� ����� ������.

	����
	�νǼ� �Է�: 3.14 9.8
	3.14 + 9.8 = 12.94

*/

#include<stdio.h>

int main()
{
	double a, b;			// ������ a,b ����	


	printf("ù��° �Ǽ��� �Է��� �ּ���: \n");
	scanf_s("%lf", &a);

	printf("�ι�° �Ǽ��� �Է��� �ּ���: \n");
	scanf_s("%lf", &b);


	double sum = a + b;
	printf("���\n");
	printf("%.2lf + %.2lf = %.2lf\n", a, b, sum);

}
/*
	scanf_S()�� ()�ȿ��� \n�� ����ϸ� �ȵȴ�.
*/