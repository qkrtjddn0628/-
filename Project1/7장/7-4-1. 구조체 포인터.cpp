// ����ü ������

#include<stdio.h>

struct ProductInfo
{	// �ɹ���
	int num;			// 4����Ʈ
	char name[100];		// 100����Ʈ
	int cost;			// 4����Ʈ
};

int main() {
	ProductInfo myProduct = { 4797283, "���� �Ѷ��", 19900 };

	ProductInfo* ptr_product = &myProduct;

	// c��� ���
	printf("��ǰ ��ȣ : %d\n", (*ptr_product).num);
	printf("��ǰ �̸� : %s\n", (*ptr_product).name);
	printf("��ǰ ���� : %d��\n\n", (*ptr_product).cost);

	//c++ ���
	printf("��ǰ ��ȣ : %d\n", ptr_product->num);		// (*ptr_product)�̶� ����
	printf("��ǰ �̸� : %s\n", ptr_product->name);
	printf("��ǰ ���� : %d��\n\n", ptr_product->cost);

	// (*a).b == a->b		���� ����

}