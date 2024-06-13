#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int year = 0;

	printf("년도를 입력해주세요: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("\n%d년은 윤년입니다.\n", year);
	}
	else
		printf("\n%d년은 평년입니다.\n", year);

	return 0;
}