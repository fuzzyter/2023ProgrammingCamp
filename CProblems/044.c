#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char op;
	int year, x;

	printf("�¾ �⵵�� �Է��� �ּ���: ");
	scanf("%d", &year);

	x = (year - 1900) % 12;

	switch (x) {
	case 0:
		printf("����Դϴ�.\n");
		break;
	case 1:
		printf("�Ҷ��Դϴ�.\n");
		break;
	case 2:
		printf("ȣ���̶��Դϴ�.\n");
		break;
	case 3:
		printf("�䳢���Դϴ�.\n");
		break;
	case 4:
		printf("����Դϴ�.\n");
		break;
	case 5:
		printf("����Դϴ�.\n");
		break;
	case 6:
		printf("�����Դϴ�.\n");
		break;
	case 7:
		printf("����Դϴ�.\n");
		break;
	case 8:
		printf("�����̶��Դϴ�.\n");
		break;
	case 9:
		printf("�߶��Դϴ�.\n");
		break;
	case 10:
		printf("�����Դϴ�.\n");
		break;
	case 11:
		printf("�������Դϴ�.\n");
		break;
	default:
		printf("�ùٸ� ���� �Է��� �ּ���.\n");
		break;
	}

	return 0;
}