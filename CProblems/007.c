#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int apple, box;

	printf("사과수 입력 : ");
	scanf("%d", &apple);

	if (apple % 20 == 0)
		box = apple / 20;
	else
		box = apple / 20 + 1;

	printf("상자수 = %d", box);

	return 0;
}