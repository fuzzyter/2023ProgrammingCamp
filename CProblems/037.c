#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a;

	printf("������ȸ ����� �Է��� �ּ���: ");
	scanf("%d", &a);

	printf("%d��: ", a);

	switch (a){
	case 1:
		printf("������, ");
	case 2:
		printf("��ǻ��, ");
	case 3:
		printf("���, ");
	case 4:
		printf("����\n");
		break;
	default:
		printf("����\n");
		break;
	}

	return 0;
}