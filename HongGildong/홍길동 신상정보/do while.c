  #include <stdio.h>

int surve(void)
{
	int num=0, total=0;

	do
	{
		total+=num;
		num=num+2;
	}while(num<=100);
	printf("¦���� �� ���: %d \n", num);
	return 0;
}