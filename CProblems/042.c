#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int i, ii=0, iii=0;

	for (i = 0; i < 10; ++i)
		printf("%d\n", i);

	//while��
	printf("\n[while�� ���]\n");

	while (1) {
		if (ii >= 10)
			break;
		printf("%d\n", ii);
		++ii; //�ٵ� ����������/���������� ���̰� ����? �� �κ� ���� ���� �ʿ��ҵ�
	}

	//do~while��
	printf("\n[do~while�� ���]\n");

	do {
		printf("%d\n", iii);
		++iii;
	} while (iii < 10);

	return 0;
}