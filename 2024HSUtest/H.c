#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main(void) {

	char room[3][100];
	int x, y;

	room[y][x];

	scanf("%d %d", &y, &x);

	scanf("%s", room[0]);

	char* find = "C";

	char* ptr = strstr(room, find);

	int cnt = 0;

	while (ptr != NULL)
	{
		ptr = strstr(ptr + 1, find);
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}