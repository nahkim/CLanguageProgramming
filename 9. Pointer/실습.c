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

	//num1과 num2 이 각각 가리키는 수 중 
	//큰수를 max가 가리키는 곳에, 
	//작은수를 min이 가리키는 곳에, 
	//평균을 average가 가리키는 곳에 넣으세요.
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int max;
	int min;
	int average;

	myMath(&num1, &num2, &max, &min, &average); //함수를 호출하고 인자를 알맞게 넘겨 보세요. (주소 넘김)

	printf("max = %d, min = %d, average = %d\n", max, min, average);
	return 0;
}
