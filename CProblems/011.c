#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sec, min, h, result;

	printf("��, ��, �ʸ� �Է��� �ּ���: ");
	scanf("%d %d %d", &h, &min, &sec);

	result = (h * 3600) + (min * 60) + sec;

	printf("\n%d�ð� %d�� %d�ʴ� %d���Դϴ�.\n", h, min, sec, result);

	return 0;
}