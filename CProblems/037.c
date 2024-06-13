#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a;

	printf("경진대회 등수를 입력해 주세요: ");
	scanf("%d", &a);

	printf("%d등: ", a);

	switch (a){
	case 1:
		printf("프린터, ");
	case 2:
		printf("컴퓨터, ");
	case 3:
		printf("상금, ");
	case 4:
		printf("상패\n");
		break;
	default:
		printf("없음\n");
		break;
	}

	return 0;
}