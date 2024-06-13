#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(a) {
	int b=0;

	for (int i = 1; i <=a; i++) {
		b = b+i;
	}
	return b;
}

int main(void) {

	int a;

	printf("양의 정수를 입력해 주세요: ");
	scanf("%d", &a);

	printf("\n%d\n", add(a));

	return 0;
}