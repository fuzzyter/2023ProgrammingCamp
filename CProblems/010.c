#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sec, min, h, sec2;

	printf("�ð��� �� ������ �Է��� �ּ���: ");
	scanf("%d", &sec);

	h = sec / 3600;
	min = (sec % 3600) / 60;
	sec2 = (sec % 3600) % 60;

	printf("\n%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", sec, h, min, sec2);

	return 0;
}