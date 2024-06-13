#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, b;

	printf("양의 정수를 입력해 주세요: ");
	scanf("%d", &a);

	b = a;

	//for문 사용, 처음엔 for문 중간 식에 i<a입력했다가 실패(값으로 10 입력 후 i<10을 해보기도 함)
	for (int i = 0; a > 0; i++) {
		if (a % 2 == 0) {
			a = a - 1;
			printf("%d ", a);
		}
		else
			printf("%d ", a);
			a = a - 2;
	}

	printf("\n");

	//while문 사용
	while (b > 0) {
		if (b % 2 == 0) {
			b = b - 1;
			printf("%d ", b);
		}
		else
			printf("%d ", b);
		b = b - 2;
	}

	return 0;
}