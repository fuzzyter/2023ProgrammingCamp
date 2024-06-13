#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int num, a, b, c, d;

	printf("[자릿수 더하기]\n네 자리 정수를 입력해주세요: ");
	scanf("%d", &num);

	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 100 / 10;
	d = num % 10;

	printf("\n%d+%d+%d+%d=%d\n", a, b, c, d, a+b+c+d);

	return 0;
}