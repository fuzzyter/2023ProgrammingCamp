#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a, b;

	printf("���� ������ �Է��� �ּ���: ");
	scanf("%d", &a);

	b = a;

	//for�� ���, ó���� for�� �߰� �Ŀ� i<a�Է��ߴٰ� ����(������ 10 �Է� �� i<10�� �غ��⵵ ��)
	for (int i = 0; a > 0; i++) {
		if (a % 2 == 0) {
			a = a - 1;
			printf("%d ", a);
		}
		else
			printf("%d ", a);
			a = a - 2;
	}

	printf("\n");

	//while�� ���
	while (b > 0) {
		if (b % 2 == 0) {
			b = b - 1;
			printf("%d ", b);
		}
		else
			printf("%d ", b);
		b = b - 2;
	}

	return 0;
}