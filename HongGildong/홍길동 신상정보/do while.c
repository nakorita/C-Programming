  #include <stdio.h>

int surve(void)
{
	int num=0, total=0;

	do
	{
		total+=num;
		num=num+2;
	}while(num<=100);
	printf("짝수의 합 출력: %d \n", num);
	return 0;
}