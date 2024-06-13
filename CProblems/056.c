#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sum = 0;
	int a;

	printf("[1 ~ n 사이 홀수의 합 구하기]\n정수 범위 입력: ");
	scanf("%d", &a);
	
	for (int i = 1; i <= a;i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}

	printf("1 ~ %d 홀수 합 = %d\n", a, sum);

	return 0;
}