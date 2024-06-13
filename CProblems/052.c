#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int d) {

	if (d <= 100) {
		return d + add(d + 1);
	}
	else
		return 0;
}

int main(void) {

	int sum1 = 0, sum2 = 0, sum3 = 0;
	int a, b=1, c=1;

	//for문

	for (a = 1; a <= 100; a++) {
		sum1 = sum1 + a;
	}
	printf("\n(1) for문 이용 sum=%d", sum1);

	//while문

	while (b <= 100) {
		sum2 = sum2 + b;
		b++;
	}
	printf("\n(2) while문 이용 sum=%d", sum2);

	//do - while문

	do {
		sum3 = sum3 + c;
		c++;
	} while (c <= 100);
	printf("\n(3) do - while문 이용 sum=%d", sum3);

	//재귀 함수
	printf("\n(4) 재귀 함수 이용 sum=%d\n", add(1));

	return 0;
}