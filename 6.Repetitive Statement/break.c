#include <stdio.h>

int main(void)
{
	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i);
		scanf("%lf", &number);

		//����ڰ� ������ �Է��ϸ� �ݺ� ������ ����ȴ�.
		if (number < 0.0)
			break;
		sum += number;

	}
	printf("�հ� = %lf", sum);
	return 0;
}