#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int score;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);

	while(1)
	{
		if (score > 100 || score < 0) {
			printf("�ùٸ� ������ �Է��� �ּ���.\n");
			break;
		}
		switch (score / 10)
		{
		case 9: case 10:
			printf("A�����Դϴ�.\n");
			break;
		case 8:
			printf("B�����Դϴ�.\n");
			break;
		case 7:
			printf("C�����Դϴ�.\n");
			break;
		case 6:
			printf("D�����Դϴ�.\n");
			break;
		default:
			printf("F�����Դϴ�.\n");
			break;
		}
		break;
	}

	return 0;
}