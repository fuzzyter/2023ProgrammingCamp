#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) { // 1���̶� �ٸ� ���� ���µ�? x y�� ���� �ʰ� ���ϴ� ����� ������?
	//���������� && ����ؼ� ������ �ϳ��� ���� ���� ���� ��

	int a, b, c;

	printf("�� ���� ������ �Է��Ͻʽÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	int x = a > b ? a : b;
	int y = x > c ? x : c;

	printf("\n���� ū ���� %d�Դϴ�.\n", y);

	return 0;
}