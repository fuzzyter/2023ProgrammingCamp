#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int count = 1;
	while (count < 20) {
		count = count + 3;
		printf("%d ", count);
	}

	//do-while문 변환
	printf("\n\n[do~while문 사용]\n");

	int count2 = 1;
	do {
		count2 = count2 + 3;
		printf("%d ", count2);
	} while (count2 < 20);

	//for문 변환
	printf("\n\n[for문 사용]\n");

	for (int count3 = 1; count3 < 20; ) {
		count3 = count3 + 3;
		printf("%d ", count3);
	}
	//for (;;) {}   <-for문 무한루프 식,= for문 조건식 생략 가능   <-이거 몰라서 처음엔 count3=0하고 밑에식에서 4증가, count3--증감식 썼었음

	/*for (int count3 = 4; count3 < 20; count3+=3) {
		printf("%d ", count3);
	}*/

	return 0;
}