#include <stdio.h>

int main(void)
{
	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 실수를 입력하시오: ", i);
		scanf("%lf", &number);

		//사용자가 음수를 입력하면 반복 루프가 종료된다.
		if (number < 0.0)
			break;
		sum += number;

	}
	printf("합계 = %lf", sum);
	return 0;
}