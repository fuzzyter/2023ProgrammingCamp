#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int money;

	printf("�ݾ��� �Է�: ");
	scanf("%d", &money);

	printf("5����: %d\n", money / 50000);
	printf("1����: %d\n", money % 50000 / 10000);
	printf("5õ��: %d\n", money % 10000 / 5000);
	printf("1õ��: %d\n", money % 5000 / 1000);
	printf("500��: %d\n", money % 1000 / 500);
	printf("100��: %d\n", money % 500 / 100);
	printf(" 50��: %d\n", money % 100 / 50);
	printf(" 10��: %d\n", money % 50 / 10);
	printf("  5��: %d\n", money % 10 / 5);
	printf("  1��: %d\n", money % 5);

	return 0;
}