#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int num, a, b, c, d;

	printf("[�ڸ��� ���ϱ�]\n�� �ڸ� ������ �Է����ּ���: ");
	scanf("%d", &num);

	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 100 / 10;
	d = num % 10;

	printf("\n%d+%d+%d+%d=%d\n", a, b, c, d, a+b+c+d);

	return 0;
}