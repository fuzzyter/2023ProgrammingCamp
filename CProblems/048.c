#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int count = 1;
	while (count < 20) {
		count = count + 3;
		printf("%d ", count);
	}

	//do-while�� ��ȯ
	printf("\n\n[do~while�� ���]\n");

	int count2 = 1;
	do {
		count2 = count2 + 3;
		printf("%d ", count2);
	} while (count2 < 20);

	//for�� ��ȯ
	printf("\n\n[for�� ���]\n");

	for (int count3 = 1; count3 < 20; ) {
		count3 = count3 + 3;
		printf("%d ", count3);
	}
	//for (;;) {}   <-for�� ���ѷ��� ��,= for�� ���ǽ� ���� ����   <-�̰� ���� ó���� count3=0�ϰ� �ؿ��Ŀ��� 4����, count3--������ �����

	/*for (int count3 = 4; count3 < 20; count3+=3) {
		printf("%d ", count3);
	}*/

	return 0;
}