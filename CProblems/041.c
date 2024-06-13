#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char op;
	int a, b;

	printf("사칙연산자(+, -, *, /, %%) 하나와 정수 두 개를 입력해 주세요: ");
	scanf("%c %d %d", &op, &a, &b); //정수 연산자 정수 이런식으로 입력해도 돌아가게 하는 법은 없나?
	//-> 안 돌아갈 경우 그게 숫자인지 문자인지 확인해 예외처리 해야할 것 같다고 하심/아니면 그냥 한 줄에 하나씩 묻고 하나씩 입력받는 게 친절할 듯
	switch (op) {
	case '+':
		printf("\n%d %c %d = %d\n", a, op, b, a + b);
		break;
	case '-':
		printf("\n%d %c %d = %d\n", a, op, b, a - b);
		break;
	case '*':
		printf("\n%d %c %d = %d\n", a, op, b, a * b);
		break;
	case '/':
		printf("\n%d %c %d = %d\n", a, op, b, a / b);
		break;
	case '%':
		printf("\n%d %c %d = %d\n", a, op, b, a % b);
		break;
	default:
		printf("잘못된 값입니다. 다시 입력해 주세요.\n");
		break;
	}

	//a = a >= b ? a : b;   <-큰 값부터 정렬하면 보기 좋으려나 싶어 작성했다가 뺌

	return 0;
}