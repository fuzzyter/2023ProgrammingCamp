#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	double x, y, result;

	printf("�غ�, ���� : ");
	scanf("%lf %lf", &x, &y);

	result = x * y / 2;

	printf("�غ�=%.2lfcm, ����=%.2lfcm�� �ﰢ���� ����=%.2lfcm��", x, y, result);

	return 0;
}