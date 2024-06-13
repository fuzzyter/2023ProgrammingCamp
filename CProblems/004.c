#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	float mile, km;

	printf("[킬로미터 변환기]\n몇 마일인지 입력해 주세요: ");
	scanf("%f", &mile);

	km = mile * 1.60935;

	printf("\n%f마일은 %f킬로미터입니다.\n", mile, km);

	return 0;
}