#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int x1, y1, x2, y2, x3, y3;

	printf("ù ��° x, y��ǥ���� �Է��� �ּ���: ");
	scanf("%d %d", &x1, &y1);

	printf("�� ��° x, y��ǥ���� �Է��� �ּ���: ");
	scanf("%d %d", &x2, &y2);

	printf("�� ��° x, y��ǥ���� �Է��� �ּ���: ");
	scanf("%d %d", &x3, &y3);

	if ((x1 == x2 == x3)|| (y1 == y2 == y3)) {
		printf("�ش� ��ǥ�δ� �ﰢ���� ���� �� �����ϴ�.");
	}

	return 0;
}