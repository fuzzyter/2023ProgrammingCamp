#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char op;
	int year, x;

	printf("태어난 년도를 입력해 주세요: ");
	scanf("%d", &year);

	x = (year - 1900) % 12;

	switch (x) {
	case 0:
		printf("쥐띠입니다.\n");
		break;
	case 1:
		printf("소띠입니다.\n");
		break;
	case 2:
		printf("호랑이띠입니다.\n");
		break;
	case 3:
		printf("토끼띠입니다.\n");
		break;
	case 4:
		printf("용띠입니다.\n");
		break;
	case 5:
		printf("뱀띠입니다.\n");
		break;
	case 6:
		printf("말띠입니다.\n");
		break;
	case 7:
		printf("양띠입니다.\n");
		break;
	case 8:
		printf("원숭이띠입니다.\n");
		break;
	case 9:
		printf("닭띠입니다.\n");
		break;
	case 10:
		printf("개띠입니다.\n");
		break;
	case 11:
		printf("돼지띠입니다.\n");
		break;
	default:
		printf("올바른 값을 입력해 주세요.\n");
		break;
	}

	return 0;
}