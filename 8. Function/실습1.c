#include <stdio.h>

int get_integer()
{
	int value;
	printf("���� �Է��ϼ���: ");
	scanf("%d", &value);

	return value;
}

void sum_integer(int x, int y)
{
	
	
	printf("��: %d\n", x + y);
	
}

void sub_integer(int x, int y)
{

	printf("����: %d\n", x - y);
	
}

void mul_integer(int x, int y)
{
	
	printf("��: %d\n", x * y);
	
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();

	sum_integer(x, y);
	sub_integer(x, y);
	mul_integer(x, y);

	return 0;
}