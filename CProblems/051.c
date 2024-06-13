#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	for (int i = 1; i <= 100; i++) {
		if ((i % 10 == 3 || i % 10 == 6 || i % 10 == 9) && (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)) {
			printf("¦¦ ");
		}
		else if ((i % 10 == 3 || i % 10 == 6 || i % 10 == 9) || (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)) {
			printf("¦ ");
		}
		else printf("%d ", i);
	}

	return 0;
}