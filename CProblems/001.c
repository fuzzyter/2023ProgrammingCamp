#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, b, c;

	printf("세 개의 정수를 입력하십시오: ");
	scanf("%d %d %d", &a, &b, &c);

	int x = a > b ? a : b;
	int y = x > c ? x : c;

	printf("\n가장 큰 수는 %d입니다.\n", y);

	return 0;
}