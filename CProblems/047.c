#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int money, tax;

	printf("연 소득을 입력해 주세요(단위: 만 원): ");
	scanf("%d", &money);

	if (money <= 1000) {
		tax = money * 10000 * 0.09;
		printf("\n납부하셔야 할 세금은 %d원입니다.\n", tax);
	}
	else if (1000 < money && money <= 4000) { //c언어 조건식에서는 범위 표현할 때 연속된 부등호 사용 불가
		tax = money * 10000 * 0.18;
		printf("\n납부하셔야 할 세금은 %d원입니다.\n", tax);
	}
	else if (4000 < money && money <= 8000) {
		tax = money * 10000 * 0.27;
		printf("\n납부하셔야 할 세금은 %d원입니다.\n", tax);
	}
	else if (8000 < money) {
		tax = money * 10000 * 0.36;
		printf("\n납부하셔야 할 세금은 %d원입니다.\n", tax);
	}

	return 0;
}