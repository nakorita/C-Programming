#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num=0; //�Է¹��� ������ ����
	int sum=0; //����ڿ��� �Է¹޴� ����
	int i=0; //������ ����

	while(num<5)
	{
		while(sum<=0) //������ 1�̸��� ��� ���Է� �޴´�
		{
			printf("���� �Է�(%d��°): ", num+1);
			scanf("%d", &sum);
		}
		i+=sum;
		sum=0; //sum�� 0���� �ʱ�ȭ�Ͽ� �ٽ� ���Է� �޴´�
		num++; //�Է¹��� ������ ���� ����
	}
	printf("���� ����: %d", i);
	return 0;
}
