#include<stdio.h>

struct ProductInfo
{
	int num;			// 4����Ʈ
	char name[100];		// 100����Ʈ
	int cost;			// 4����Ʈ
};

int main() {
	ProductInfo myProduct = { 4797283, "���� �Ѷ��", 19900 };

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��ǰ ���� : %d��\n\n", myProduct.cost);

	printf("��ǰ ��ȣ : %d\n", &myProduct.num);
	printf("��ǰ �̸� : %d\n", &myProduct.name);
	printf("��ǰ ���� : %d\n", &myProduct.cost);

	printf("%d\n", &myProduct);

}