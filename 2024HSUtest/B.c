#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int W, B, M;

	scanf("%d %d %d", &W, &B, &M);

	printf("%d", W+B-M);

	return 0;
}