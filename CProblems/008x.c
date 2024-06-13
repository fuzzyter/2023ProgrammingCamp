#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char letter;
	int binary[SIZE];

	printf("문자 입력 : ");
	scanf("%c", &letter);

	for (int i = 7; i >= 0; --i) {
		int result = letter >> i & 1;
	}

	printf("10진수: %d, 8진수: %o, 16진수: %x, 2진수: %d", letter, letter, letter, result);

	return 0;
}