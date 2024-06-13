#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int score;
	printf("점수를 입력하세요: ");
	scanf("%d", &score);

	while(1)
	{
		if (score > 100 || score < 0) {
			printf("올바른 점수를 입력해 주세요.\n");
			break;
		}
		switch (score / 10)
		{
		case 9: case 10:
			printf("A학점입니다.\n");
			break;
		case 8:
			printf("B학점입니다.\n");
			break;
		case 7:
			printf("C학점입니다.\n");
			break;
		case 6:
			printf("D학점입니다.\n");
			break;
		default:
			printf("F학점입니다.\n");
			break;
		}
		break;
	}

	return 0;
}