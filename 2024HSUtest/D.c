#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

    int key;
    char str[50], ch;

	scanf("%d", &key);
	scanf(" %s", str);

    for (int i=0; i<=50; i++) {   // 문자열 끝까지 반복 
        while (1)
        {
            if (str[i] == '\0')
                break; 
            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] -= key;   // 이동 
            else   // 영문자 외 건너감 
                continue;
            if (str[i] > 'Z')
                str[i] = str[i] - 91 + 'A';
            printf("%c", str[i]);
        }
        printf(" ");
    }

}