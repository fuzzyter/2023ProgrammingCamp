#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int money;

	printf("금액을 입력: ");
	scanf("%d", &money);

	printf("5만원: %d\n", money / 50000);
	printf("1만원: %d\n", money % 50000 / 10000);
	printf("5천원: %d\n", money % 10000 / 5000);
	printf("1천원: %d\n", money % 5000 / 1000);
	printf("500원: %d\n", money % 1000 / 500);
	printf("100원: %d\n", money % 500 / 100);
	printf(" 50원: %d\n", money % 100 / 50);
	printf(" 10원: %d\n", money % 50 / 10);
	printf("  5원: %d\n", money % 10 / 5);
	printf("  1원: %d\n", money % 5);

	return 0;
}