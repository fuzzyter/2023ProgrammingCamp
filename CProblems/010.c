#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int sec, min, h, sec2;

	printf("시간을 초 단위로 입력해 주세요: ");
	scanf("%d", &sec);

	h = sec / 3600;
	min = (sec % 3600) / 60;
	sec2 = (sec % 3600) % 60;

	printf("\n%d초는 %d시간 %d분 %d초입니다.\n", sec, h, min, sec2);

	return 0;
}