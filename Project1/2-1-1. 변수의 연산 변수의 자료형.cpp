#include<stdio.h>

int main()
{
	// ��Ʈ�� + h : �ܾ� ã��

	/*
	// int : 32��Ʈ(4����Ʈ), ������ ��� �� �����
	int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;	// % :�� �������� ����ϴ� �ܾ�

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuji);
	// %�� ������ ��ǻ�ʹ� �ٸ��� �ؼ��Ҽ� �ֱ⿡ %�� ����ϰ������ %%�� �����ϸ� �ȴ�.
	*/
	

	/*
	// �ε��Ҽ���(floating point)
	// float : 32��Ʈ(4����Ʈ), �Ǽ��� ��� �� ���� ������ �Ǽ��� ��⿣ ũ�Ⱑ ����
	float a = 5;
	float b = 3;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	*/

	// double: 64��Ʈ(8����Ʈ), �Ǽ��� ��� �� ���� float ���ٴ� ��� ũ�Ⱑ ŭ
	double a = 5;
	double b = 3;

	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	
	
}