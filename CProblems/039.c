#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, b, result;

	printf("[���밪�� �� ���ϱ�]\n\n�� ���� ������ �Է��� �ּ���: ");
	scanf("%d %d", &a, &b);

	result = abs(a) + abs(b);

	printf("\n�� ���� ���밪�� ���� %d�Դϴ�.\n", result);

	return 0;
}