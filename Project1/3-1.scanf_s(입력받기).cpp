//#define _CRI_SECURE_NO_WARNINGS // ������ �����Ѵ�.
#include<stdio.h>

int main()
{
	////����
	//int a, b;
	//
	//scanf_s("%d%d", &a, &b);	// &: ������
	////�߰� : 2017 ���ĺ��� scanf���� ���ȹ����� �־� scanf_s�� �߰��ؼ� ����ؾ� �Ѵ�. �̷��� �ϴ� ���� ��õ
	//// �ٸ� ��� : ��� ��ġ�� #define _CRI_SECURE_NO_WARNINGS�� �߰��ϸ� scanf�� ������ �Ȱɸ��� ����Ҽ��ִ�. ���ŷο� ����



	//int hap = a + b;
	//int cha = a - b;
	//int gop = a * b;
	//int mok = a / b;


	//printf("%d + %d = %d\n", a, b, hap);
	//printf("%d - %d = %d\n", a, b, cha);
	//printf("%d * %d = %d\n", a, b, gop);
	//printf("%d / %d = %d\n", a, b, mok);


	//int a, b;

	//scanf_s("%d%d", &a, &b);	// &: ������
	////�߰� : 2017 ���ĺ��� scanf���� ���ȹ���(�����÷ο�)�� �־� scanf_s�� �߰��ؼ� ����ؾ� �Ѵ�. �̷��� �ϴ� ���� ��õ
	//// �ٸ� ��� : ��� ��ġ�� #define _CRI_SECURE_NO_WARNINGS�� �߰��ϸ� scanf�� ������ �Ȱɸ��� ����Ҽ��ִ�. ���ŷο� ����
	//

	
	//����) �Ǽ��� �ٲٱ�
	float a, b;

	scanf_s("%f%f", &a, &b);	// &: ������


	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	/*
		double �� �Է¹�������% lf�� ����ؾ� �Ѵ�.
		��)
			double d;
			scnaf_s("%lf", &d);
	*/
	
	

}