#include <stdio.h>
#define DEBUG

void calc_array_avg(int numbers[], int size)
{
	//printf("function:%d\n",sizeof(numbers));
	int sum=0;
	
	printf("�迭�� ����� ����մϴ�.\n");
	printf("calc_array_avg()\n");

#ifdef DEBUG
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", numbers[j]);
	}
	printf("\n");
#endif
	

	
	for (int i = 0; i < 10; i++)
	{
#ifdef DEBUG
		


		printf("%d�� ���ϴ� ��",numbers[i]);
		printf("\n");
#endif
	}
	

	for (int i = 0; i < 10; i++)
	{
		sum += numbers[i];
	}

	printf("���= %lf", sum / (double)size);
}


int main(void)
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("main:%d\n", sizeof(numbers));
	calc_array_avg(numbers, sizeof(numbers)/4);
}