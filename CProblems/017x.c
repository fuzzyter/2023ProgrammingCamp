#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char x;


	printf("���ڿ��� �Է��� �ּ���: ");
	scanf("%c", &x);

	if (x <= 'Z' && x >= 'A')
		x = x + 32;
	else if (x <= 'z' && x >= 'a')
		x = x - 32;

	printf("\n%c\n", x);

	return 0;
}