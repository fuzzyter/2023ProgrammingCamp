#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int i=0, result=0;

	while (1) {
		//if (result > 1000)          <- 1. 처음에 while(result + i <= 1000)하고 안에 if문없을때 구글링해서 찾아넣은거
		//	i = i - 1;
		//	result = result - i;
		//	break;
		if (result + i > 1000) //3. while문은 위에 조건걸지말고 안에 빠져나오는 조건을 넣는게 낫다고 교수님께서 말씀해주심
			break;

		result = result + i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", i-1, result); //2. i-1 이런식으로 출력하는건 괜찮다고 하심.(위에 구글링해서 찾은 if문 넣으면 필요없는 부분)

	return 0;
}