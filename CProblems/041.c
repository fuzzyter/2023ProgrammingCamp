#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char op;
	int a, b;

	printf("��Ģ������(+, -, *, /, %%) �ϳ��� ���� �� ���� �Է��� �ּ���: ");
	scanf("%c %d %d", &op, &a, &b); //���� ������ ���� �̷������� �Է��ص� ���ư��� �ϴ� ���� ����?
	//-> �� ���ư� ��� �װ� �������� �������� Ȯ���� ����ó�� �ؾ��� �� ���ٰ� �Ͻ�/�ƴϸ� �׳� �� �ٿ� �ϳ��� ���� �ϳ��� �Է¹޴� �� ģ���� ��
	switch (op) {
	case '+':
		printf("\n%d %c %d = %d\n", a, op, b, a + b);
		break;
	case '-':
		printf("\n%d %c %d = %d\n", a, op, b, a - b);
		break;
	case '*':
		printf("\n%d %c %d = %d\n", a, op, b, a * b);
		break;
	case '/':
		printf("\n%d %c %d = %d\n", a, op, b, a / b);
		break;
	case '%':
		printf("\n%d %c %d = %d\n", a, op, b, a % b);
		break;
	default:
		printf("�߸��� ���Դϴ�. �ٽ� �Է��� �ּ���.\n");
		break;
	}

	//a = a >= b ? a : b;   <-ū ������ �����ϸ� ���� �������� �;� �ۼ��ߴٰ� ��

	return 0;
}