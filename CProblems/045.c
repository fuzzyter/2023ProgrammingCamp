#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int max=0;
	int num[3];

	printf("세 개의 정수를 입력하십시오: ");
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	int i = 0;
	do {
		max = max > num[i] ? max : num[i];
		i++;
	} while (i<3);

	//밑엔 max 변수 안 쓰고 풀어본 거, 이 경우 출력값도 num[0]으로 변경

	/*do {
		num[0] = num[0] > num[i] ? num[0] : num[i];
		i++;
	} while (i < 3);*/

	printf("\n가장 큰 수는 %d입니다.\n", max);

	return 0;
}