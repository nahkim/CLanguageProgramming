#include <stdio.h>

int main(void)
{
	int number = 10;
	int *p;

	p = &number;

	printf("���� number�� �ּ� = %u\n", &number);
	printf("�������� �� = %u\n", number);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	return 0;
}