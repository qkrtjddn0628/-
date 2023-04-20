#include<stdio.h>

struct ProductInfo
{
	int num;			// 4바이트
	char name[100];		// 100바이트
	int cost;			// 4바이트
};

int main() {
	ProductInfo myProduct = { 4797283, "제주 한라봉", 19900 };

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("상품 가격 : %d원\n\n", myProduct.cost);

	printf("상품 번호 : %d\n", &myProduct.num);
	printf("상품 이름 : %d\n", &myProduct.name);
	printf("상품 가격 : %d\n", &myProduct.cost);

	printf("%d\n", &myProduct);

}