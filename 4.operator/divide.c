#include <stdio.h>

int main(void)
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("���� �ڸ��� : %d\n", x / 100);
	printf("���� �ڸ��� : %d\n", x % 100 / 10);
	printf("���� �ڸ��� : %d\n", x % 100 % 10);

	return 0;
}