#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int sum = 100, sub;

	while (1) {
		printf("sum=%d", sum);

		if (sum == 0) {
			printf("\n");
			break;
		}

		printf(" »¬ °ª ÀÔ·Â: ");
		scanf("%d", &sub);
		sum = sum - sub;
	}

	return 0;
}