#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) { // 1번이랑 다른 점이 없는데? x y를 쓰지 않고 구하는 방법이 있을까?
	//논리연산자 && 사용해서 변수를 하나로 줄일 수는 있을 듯

	int a, b, c;

	printf("세 개의 정수를 입력하십시오: ");
	scanf("%d %d %d", &a, &b, &c);

	int x = a > b ? a : b;
	int y = x > c ? x : c;

	printf("\n가장 큰 수는 %d입니다.\n", y);

	return 0;
}