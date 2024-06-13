#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	char a;
	short b;
	int c;
	long d;
	long long e;
	float f;
	double g;
	long double h;

	printf("\nchar = %d byte", sizeof(a));
	printf("\nshort = %d byte", sizeof(b));
	printf("\nint = %d byte", sizeof(c));
	printf("\nlong = %d byte", sizeof(d));
	printf("\nlong long = %d byte", sizeof(e));
	printf("\nfloat = %d byte", sizeof(f));
	printf("\ndoule = %d byte", sizeof(g));
	printf("\nlong double = %d byte\n", sizeof(h));

	return 0;
}