#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int year = 0;

	printf("�⵵�� �Է����ּ���: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("\n%d���� �����Դϴ�.\n", year);
	}
	else
		printf("\n%d���� ����Դϴ�.\n", year);

	return 0;
}