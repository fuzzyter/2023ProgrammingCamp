#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int x1, y1, x2, y2, x3, y3;

	printf("첫 번째 x, y좌표값을 입력해 주세요: ");
	scanf("%d %d", &x1, &y1);

	printf("두 번째 x, y좌표값을 입력해 주세요: ");
	scanf("%d %d", &x2, &y2);

	printf("세 번째 x, y좌표값을 입력해 주세요: ");
	scanf("%d %d", &x3, &y3);

	if ((x1 == x2 == x3)|| (y1 == y2 == y3)) {
		printf("해당 좌표로는 삼각형을 만들 수 없습니다.");
	}

	return 0;
}