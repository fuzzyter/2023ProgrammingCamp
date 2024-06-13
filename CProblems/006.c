#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	double x, y, result;

	printf("밑변, 높이 : ");
	scanf("%lf %lf", &x, &y);

	result = x * y / 2;

	printf("밑변=%.2lfcm, 높이=%.2lfcm인 삼각형의 면적=%.2lfcm²", x, y, result);

	return 0;
}