#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int max=0;
	int num[3];

	printf("�� ���� ������ �Է��Ͻʽÿ�: ");
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	int i = 0;
	do {
		max = max > num[i] ? max : num[i];
		i++;
	} while (i<3);

	//�ؿ� max ���� �� ���� Ǯ� ��, �� ��� ��°��� num[0]���� ����

	/*do {
		num[0] = num[0] > num[i] ? num[0] : num[i];
		i++;
	} while (i < 3);*/

	printf("\n���� ū ���� %d�Դϴ�.\n", max);

	return 0;
}