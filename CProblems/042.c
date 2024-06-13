#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int i, ii=0, iii=0;

	for (i = 0; i < 10; ++i)
		printf("%d\n", i);

	//while문
	printf("\n[while문 사용]\n");

	while (1) {
		if (ii >= 10)
			break;
		printf("%d\n", ii);
		++ii; //근데 전위연산자/후위연산자 차이가 없네? 이 부분 개념 복습 필요할듯
	}

	//do~while문
	printf("\n[do~while문 사용]\n");

	do {
		printf("%d\n", iii);
		++iii;
	} while (iii < 10);

	return 0;
}