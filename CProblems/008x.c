#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char letter;
	int binary[SIZE];

	printf("���� �Է� : ");
	scanf("%c", &letter);

	for (int i = 7; i >= 0; --i) {
		int result = letter >> i & 1;
	}

	printf("10����: %d, 8����: %o, 16����: %x, 2����: %d", letter, letter, letter, result);

	return 0;
}