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

	printf("���� ������ �Է��� �ּ���: ");
	scanf("%d", &a);

	printf("\n%d\n", add(a));

	return 0;
}