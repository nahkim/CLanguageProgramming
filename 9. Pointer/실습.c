#include <stdio.h>

void myMath(int* num1, int* num2, int* max, int* min, int* average)
{
	if (*num1 > * num2)
	{
		*max = *num1;
		*min = *num2;
	}
	else
	{
		*max = *num2;
		*min = *num1;
	}
	*average = (*num1 + *num2) / 2;

	//num1�� num2 �� ���� ����Ű�� �� �� 
	//ū���� max�� ����Ű�� ����, 
	//�������� min�� ����Ű�� ����, 
	//����� average�� ����Ű�� ���� ��������.
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int max;
	int min;
	int average;

	myMath(&num1, &num2, &max, &min, &average); //�Լ��� ȣ���ϰ� ���ڸ� �˸°� �Ѱ� ������. (�ּ� �ѱ�)

	printf("max = %d, min = %d, average = %d\n", max, min, average);
	return 0;
}
