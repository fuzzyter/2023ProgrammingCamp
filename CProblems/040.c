#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int i=0, result=0;

	while (1) {
		//if (result > 1000)          <- 1. ó���� while(result + i <= 1000)�ϰ� �ȿ� if�������� ���۸��ؼ� ã�Ƴ�����
		//	i = i - 1;
		//	result = result - i;
		//	break;
		if (result + i > 1000) //3. while���� ���� ���ǰ������� �ȿ� ���������� ������ �ִ°� ���ٰ� �����Բ��� �������ֽ�
			break;

		result = result + i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", i-1, result); //2. i-1 �̷������� ����ϴ°� �����ٰ� �Ͻ�.(���� ���۸��ؼ� ã�� if�� ������ �ʿ���� �κ�)

	return 0;
}