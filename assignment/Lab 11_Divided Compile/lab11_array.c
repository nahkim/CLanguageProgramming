#include <stdio.h>

int get_sum_of_array(int a[], int size)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum;
}

void print_array(int a[], int size)
{
	int i = 0;
	printf("[ ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("]\n");

	printf("�迭 ����� ��=%d", get_sum_of_array(a,size));
}