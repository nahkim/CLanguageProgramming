#include <stdio.h>

int main(void)
{
	int i, j;
	int min, max, sum = 0;

	//3�� 5��
	int a[3][5] = { {3,4,11,4,9},{13,5,20,31,14},{10,3,2,16,5} };

	min = a[0][0];
	max = a[0][0];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum += a[i][j];
			if (a[i][j] < min)
				min = a[i][j]; //min
			if (a[i][j] > max)
				max = a[i][j];
		}
	}

	printf("��� ���� ��:%d\n", sum);
	printf("���� ���� ��:%d\n", min);
	printf("���� ū ��:%d\n", max);


	return 0;
}