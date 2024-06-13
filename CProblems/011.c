#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sec, min, h, result;

	printf("시, 분, 초를 입력해 주세요: ");
	scanf("%d %d %d", &h, &min, &sec);

	result = (h * 3600) + (min * 60) + sec;

	printf("\n%d시간 %d분 %d초는 %d초입니다.\n", h, min, sec, result);

	return 0;
}