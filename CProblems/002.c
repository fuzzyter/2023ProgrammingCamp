#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	float a, b;
	float add, sub, mul, div;

	printf("�� ���� �ε� �Ҽ����� �Է��Ͻʽÿ�: ");
	scanf("%f %f", &a, &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("\n��: %.2f", add);
	printf("\n��: %.2f", sub);
	printf("\n��: %.2f", mul);
	printf("\n��: %.2f\n", div);

	return 0;
}