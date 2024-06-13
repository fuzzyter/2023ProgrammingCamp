#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int T, x, y, a, b, time;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d", &x, &y, &a, &b);
		for (time=0; time <= 2000;time++) {
			if (x == y)
				//printf("%d", time);
				break;
			/*if (time > 100)
				printf("-1");
				break;*/
			x = x + a;
			y = y - b;
		}
		if(time>=2000)
			printf("%d", -1);
		else
			printf("%d", time);
	}
}