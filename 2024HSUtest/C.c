#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main(void) {

	char Hong[100];

	scanf("%s", &Hong[0]);

	char* find = "Hong";

	char* ptr = strstr(Hong, find);

	int cnt = 0;

	while (ptr != NULL)
	{
		ptr = strstr(ptr + 1, find);
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}