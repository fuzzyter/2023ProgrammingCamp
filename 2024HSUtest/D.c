#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

    int key;
    char str[50], ch;

	scanf("%d", &key);
	scanf(" %s", str);

    for (int i=0; i<=50; i++) {   // ���ڿ� ������ �ݺ� 
        while (1)
        {
            if (str[i] == '\0')
                break; 
            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] -= key;   // �̵� 
            else   // ������ �� �ǳʰ� 
                continue;
            if (str[i] > 'Z')
                str[i] = str[i] - 91 + 'A';
            printf("%c", str[i]);
        }
        printf(" ");
    }

}