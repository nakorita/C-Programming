#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i=0;
	int j=0;
	while(i<5);
	{
		while(j<i)
		{
			printf("o");
			j++;
		}
		printf("*");
		j=0;
		i++;
	}
	return 0;
}

