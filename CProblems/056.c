#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sum = 0;
	int a;

	printf("[1 ~ n ���� Ȧ���� �� ���ϱ�]\n���� ���� �Է�: ");
	scanf("%d", &a);
	
	for (int i = 1; i <= a;i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}

	printf("1 ~ %d Ȧ�� �� = %d\n", a, sum);

	return 0;
}