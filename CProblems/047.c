#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int money, tax;

	printf("�� �ҵ��� �Է��� �ּ���(����: �� ��): ");
	scanf("%d", &money);

	if (money <= 1000) {
		tax = money * 10000 * 0.09;
		printf("\n�����ϼž� �� ������ %d���Դϴ�.\n", tax);
	}
	else if (1000 < money && money <= 4000) { //c��� ���ǽĿ����� ���� ǥ���� �� ���ӵ� �ε�ȣ ��� �Ұ�
		tax = money * 10000 * 0.18;
		printf("\n�����ϼž� �� ������ %d���Դϴ�.\n", tax);
	}
	else if (4000 < money && money <= 8000) {
		tax = money * 10000 * 0.27;
		printf("\n�����ϼž� �� ������ %d���Դϴ�.\n", tax);
	}
	else if (8000 < money) {
		tax = money * 10000 * 0.36;
		printf("\n�����ϼž� �� ������ %d���Դϴ�.\n", tax);
	}

	return 0;
}