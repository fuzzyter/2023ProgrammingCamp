#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int apple, box;

	printf("����� �Է� : ");
	scanf("%d", &apple);

	if (apple % 20 == 0)
		box = apple / 20;
	else
		box = apple / 20 + 1;

	printf("���ڼ� = %d", box);

	return 0;
}