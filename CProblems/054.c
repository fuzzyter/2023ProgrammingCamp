#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int sum=0, add;

	while (1) {
		printf("sum=%d", sum);

		if (sum == 100) {
			printf("\n");
			break;
		}

		printf(" ���� �� �Է�: ");
		scanf("%d", &add);
		sum = sum + add;
	}

	return 0;
}