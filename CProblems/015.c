#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int num, i=0;

	printf("[자릿수 구하기]\n\n정수 입력: ");
	scanf("%d", &num);

	for (i; num > 0; i++) {
		num = num / 10;
	}

	printf("\n자릿수= %d\n", i);

	return 0;
}