#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num=0; //입력받은 정수의 개수
	int sum=0; //사용자에게 입력받는 정수
	int i=0; //정수의 총합

	while(num<5)
	{
		while(sum<=0) //정수는 1미만일 경우 재입력 받는다
		{
			printf("정수 입력(%d번째): ", num+1);
			scanf("%d", &sum);
		}
		i+=sum;
		sum=0; //sum을 0으로 초기화하여 다시 재입력 받는다
		num++; //입력받은 정수의 개수 증가
	}
	printf("정수 총합: %d", i);
	return 0;
}
