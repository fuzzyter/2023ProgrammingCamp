#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	float mile, km;

	printf("[ų�ι��� ��ȯ��]\n�� �������� �Է��� �ּ���: ");
	scanf("%f", &mile);

	km = mile * 1.60935;

	printf("\n%f������ %fų�ι����Դϴ�.\n", mile, km);

	return 0;
}