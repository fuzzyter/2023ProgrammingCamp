#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	float a, b;
	float add, sub, mul, div;

	printf("두 개의 부동 소수점을 입력하십시오: ");
	scanf("%f %f", &a, &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("\n합: %.2f", add);
	printf("\n차: %.2f", sub);
	printf("\n곱: %.2f", mul);
	printf("\n몫: %.2f\n", div);

	return 0;
}