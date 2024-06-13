#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, b, result;

	printf("[절대값의 합 구하기]\n\n두 개의 정수를 입력해 주세요: ");
	scanf("%d %d", &a, &b);

	result = abs(a) + abs(b);

	printf("\n두 수의 절대값의 합은 %d입니다.\n", result);

	return 0;
}