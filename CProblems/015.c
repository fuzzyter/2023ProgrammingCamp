#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int num, i=0;

	printf("[�ڸ��� ���ϱ�]\n\n���� �Է�: ");
	scanf("%d", &num);

	for (i; num > 0; i++) {
		num = num / 10;
	}

	printf("\n�ڸ���= %d\n", i);

	return 0;
}