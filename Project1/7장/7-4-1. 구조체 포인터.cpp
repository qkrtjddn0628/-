// 구조체 포인터

#include<stdio.h>

struct ProductInfo
{	// 맴버들
	int num;			// 4바이트
	char name[100];		// 100바이트
	int cost;			// 4바이트
};

int main() {
	ProductInfo myProduct = { 4797283, "제주 한라봉", 19900 };

	ProductInfo* ptr_product = &myProduct;

	// c언어 방식
	printf("상품 번호 : %d\n", (*ptr_product).num);
	printf("상품 이름 : %s\n", (*ptr_product).name);
	printf("상품 가격 : %d원\n\n", (*ptr_product).cost);

	//c++ 방식
	printf("상품 번호 : %d\n", ptr_product->num);		// (*ptr_product)이랑 동일
	printf("상품 이름 : %s\n", ptr_product->name);
	printf("상품 가격 : %d원\n\n", ptr_product->cost);

	// (*a).b == a->b		서로 동일

}